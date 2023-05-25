var express = require('express');
var app = express();

websocket = new WebSocket("ws://10.100.0.40:9001/");

websocket.onopen = (evt) => { log("OPENED websocket"); };

websocket.onmessage = (message) => {
    var msg = JSON.parse(message.data);
    log("RECEIVED: " + msg);
}

// set the view engine to ejs
app.set('view engine', 'ejs');

// use res.render to load up an ejs view file

// index page
app.get('/', function(req, res) {
  res.render('index');
});

app.listen(8080);
console.log('Server is listening on port 8080');
