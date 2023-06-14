var express = require("express");
var app = express();

let sse_clients = [];

app.use(express.static("public"));
app.use(express.json());

// set the view engine to ejs
app.set("view engine", "ejs");

// use res.render to load up an ejs view file

// index page
app.get("/", function (req, res) {
  res.render("index", { api_connected: api_connected });
});

app.get("/events", handle_sse_client);

app.listen(8080);
console.log("Server is listening on port 8080");
