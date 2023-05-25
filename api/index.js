var express = require("express");
var app = express();
import WebSocket from "ws";

var ws = new WebSocket("ws://10.100.0.40:9001/");

ws.on('open', function open() {
    console.log("connected");
  });

ws.on("message", function message(message) {
  var msg = JSON.parse(message);
  console.log("RECEIVED: " + msg);
});

ws.on("error", console.error);

// set the view engine to ejs
app.set("view engine", "ejs");

// use res.render to load up an ejs view file

// index page
app.get("/", function (req, res) {
  res.render("index");
});

app.listen(8080);
console.log("Server is listening on port 8080");
