var express = require("express");
var app = express();
const WebSocket = require("ws");

//# TODO SSE https://www.digitalocean.com/community/tutorials/nodejs-server-sent-events-build-realtime-app

var last_status = {};
var last_image;
var received_picture = false;
var received_error = false;

let sse_clients = [];

app.use(express.static("public"));
app.use(express.json());

var ws;
var api_connected = false;

function send_events_to_clients(data) {
  //   console.log("sending events to clients");
  sse_clients.forEach((client) => {
    client.response.write("event: message\n");
    client.response.write("data:" + JSON.stringify(data) + "\n\n");
  });
}

function handle_sse_client(request, response, next) {
  console.log("handling sse client");
  const headers = {
    "Content-Type": "text/event-stream",
    Connection: "keep-alive",
    "Cache-Control": "no-cache",
  };

  response.writeHead(200, headers);
  response.write(JSON.stringify("yeet") + "\n\n");
  const clientID = Date.now();
  const newClient = {
    id: clientID,
    response,
  };

  sse_clients.push(newClient);

  request.on("close", () => {
    console.log(`${clientID} Connection closed`);
    sse_clients = sse_clients.filter((client) => client.id !== clientID);
  });
}

var connect_to_api = function () {
  console.log("Connecting to API");
  ws = new WebSocket("ws://10.100.0.40:9001/");

  ws.on("open", function open() {
    console.log("connected with websockets to API!");
    api_connected = true;
  });

  ws.on("message", function message(message) {
    try {
      var msg = JSON.parse(message);
      if (msg.type != "IMAGE") {
        //   console.log("got message");
        send_events_to_clients(msg);
      } else {
        console.log("got image");
      }
    } catch (error) {
      console.log("could not parse as json");
      //   send_image_data_to_clients(message);
    }
  });

  ws.on("error", function error(err) {
    console.log("there was an error");
    console.error("error: " + err);
    received_error = true;
  });
};

function send_image_data_to_clients(videoData) {
  sse_clients.forEach((client) => {

    // Set the SSE event name as 'message'
    client.response.write("event: message\n");

    // Convert the Buffer to a base64-encoded string
    const base64Data = videoData.toString("base64");

    // Set the SSE event data as the base64-encoded string
    client.response.write(
      "data: " + JSON.stringify({ image: base64Data }) + "\n\n"
    );
  });
}

// Define the endpoint to receive video data
app.post("/video", (req, res) => {
    // console.log("got video endpoint")
  let videoData = Buffer.from("");

  req.on("data", (chunk) => {
    // Accumulate the received video data
    videoData = Buffer.concat([videoData, chunk]);
  });

  req.on("end", () => {
    // Process the received video data
    //   console.log("Received video data:" + videoData.length);
      send_image_data_to_clients(videoData); 

    // Send a response indicating successful receipt
    res.sendStatus(200);
  });
});

// set the view engine to ejs
app.set("view engine", "ejs");

// use res.render to load up an ejs view file

// index page
app.get("/", function (req, res) {
  res.render("index", { api_connected: api_connected });
});

app.get("/events", handle_sse_client);

app.get("/image", function (req, res) {
  console.log("got picture request");
  var request = JSON.stringify({
    command: 5,
  });
  console.log("sending picture request");
  ws.send(request);
  res.status(200).send(last_image);
});

app.post("/move", function (req, res) {
  console.log("got move request");
  var request = JSON.stringify({
    command: 3,
    up_down: req.body.up_down,
    left_right: req.body.left_right,
    forward_backward: req.body.forward_backward,
    yaw: req.body.turn_left_right,
  });
  ws.send(request);
});

app.get("/connect", function (req, res) {
  console.log("got connect request");
  connect_to_api();
  setTimeout(function () {
    if (api_connected) {
      res.status(200).json({ connected: true });
    } else {
      received_error = false;
      res.status(400).json({ connected: false });
    }
  }, 1000);
});

app.get("/test", function (req, res) {
    res.render("test");
});

app.listen(8080);
console.log("Server is listening on port 8080");
