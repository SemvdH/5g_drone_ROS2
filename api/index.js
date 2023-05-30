var express = require("express");
var app = express();
const WebSocket = require("ws");

var last_status = {};
var last_image;
var received_picture = false;

app.use(express.static("public"));
app.use(express.json());

var ws;
var api_connected = false;

ws.on("open", function open() {
  console.log("connected with websockets to API!");
  api_connected = true;
});

ws.on("message", function message(message) {
  var msg = JSON.parse(message);
  if (msg.type == "STATUS") {
    last_status = msg.data;
  } else if (msg.type == "IMAGE") {
    console.log("got picture");
    console.log(msg.image);
    last_image = msg.image;
    received_picture = true;
  }

  // console.log("got type: " + msg.type);
  // console.log("RECEIVED: " + msg.data);
});

ws.on("error", console.error);

// set the view engine to ejs
app.set("view engine", "ejs");

// use res.render to load up an ejs view file

// index page
app.get("/", function (req, res) {
  res.render("index", { api_connected: api_connected });
});

app.get("/status", function (req, res) {
  res.status(200).json(last_status);
});

app.get("/image", function (req, res) { 
  console.log("got picture request");
  var request = JSON.stringify({
    command: 5
  });
  console.log("sending picture request")
  ws.send(request);
  while (received_picture == false) { }
  res.status(200).send(last_image);
});

app.post("/move", function (req, res) {
  console.log("got move request");
  var request = JSON.stringify({
    command: 3,
    up_down: req.body.up_down,
    left_right: req.body.left_right,
    forward_backward: req.body.forward_backward,
    yaw: req.body.turn_left_right
  });
  ws.send(request);
});

app.get("/connect", function (req, res) {
    console.log("got connect request");
    ws = new WebSocket("ws://10.100.0.40:9001/");
    while (api_connected == false) { }
    res.status(200).json({ connected: true });
    
});

app.listen(8080);
console.log("Server is listening on port 8080");
