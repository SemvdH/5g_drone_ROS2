var express = require("express");
var app = express();
const WebSocket = require("ws");

var last_status = {};

app.use(express.static("public"));

var ws = new WebSocket("ws://10.100.0.40:9001/");
var api_connected = false;

ws.on("open", function open() {
  console.log("connected with websockets to API!");
  api_connected = true;
});

ws.on("message", function message(message) {
  var msg = JSON.parse(message);
  if (msg.type == "STATUS") {
    last_status = msg.data;
  }

  console.log("got type: " + msg.type);
  console.log("RECEIVED: " + msg.data);
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

app.post("/move", function (req, res) {
  console.log("got move request");
  var request = JSON.stringify({
    command: 3,
    up_down: req.data.up_down,
    left_right: req.data.left_right,
    forward_backward: req.data.forward_backward,
    yaw: req.data.turn_left_right
  });
  ws.send(request);
});

app.listen(8080);
console.log("Server is listening on port 8080");
