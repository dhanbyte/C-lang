#include <iostream>
#include <boost/asio.hpp>

using namespace boost::asio;
using ip::tcp;

int main() {
    io_service io;

    // Create an endpoint to accept incoming connections on port 8080
    tcp::endpoint endpoint(tcp::v4(), 8080);

    // Create an acceptor to listen for incoming connections
    tcp::acceptor acceptor(io, endpoint);

    std::cout << "Server started. Listening on port 8080..." << std::endl;

    while (true) {
        // Create a socket for a new connection
        tcp::socket socket(io);

        // Wait for and accept a new connection
        acceptor.accept(socket);

        // Send a response to the client
        std::string message = "HTTP/1.1 200 OK\r\nContent-Length: 13\r\n\r\nHello, World!";
        boost::system::error_code ignored_error;
        write(socket, buffer(message), ignored_error);
    }

    return 0;
}