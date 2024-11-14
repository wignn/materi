const http = require('node:http');

const hostName = 'localhost';
const port = 3000;

const server = http.createServer((req, res) => {
    res.statusCode = 200;
    console.log("server is running......");
    res.setHeader('Content-Type', 'text/plain');
    res.end('Hello World');
});

server.listen(port, hostName, () => {
    console.log(`Server running at http://${hostName}:${port}/`);
});
