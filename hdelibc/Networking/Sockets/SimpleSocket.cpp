#include "SimpleSocket.h"

HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface)
{
    // define address structure
    address.sin_family = domain;
    address.sin_addr.s_addr = htonl(interface);
    address.sin_port = htons(port);
    // Establish connection
    sock = socket(domain, service, protocol);
    test_connection(sock);
}

void HDE::SimpleSocket::test_connection(int item_to_test)
{
    if (item_to_test < 0)
    {
        perror("Faield to connect...");
        exit(EXIT_FAILURE);
    }
}


int HDE::SimpleSocket::get_sock()
{
    return sock;
}

struct sockaddr_in HDE::SimpleSocket::get_address()
{
    return address;
}
