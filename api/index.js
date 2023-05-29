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
  res.json(last_status);
});

app.post("/move_up", function (req, res) {
  console.log("got move up request");
  var speed = req.data.speed;
  var request = JSON.stringify({
    command: 3,
    up_down: speed,
    left_right: 0,
    forward_backward: 0,
    yaw: 0,
  });
  ws.send(request);
});

app.listen(8080);
console.log("Server is listening on port 8080");
