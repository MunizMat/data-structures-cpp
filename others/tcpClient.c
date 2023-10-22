#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main()
{
    char *ip = "127.0.0.1";
    int port = 5566;

    int sock;
    struct sockaddr_in addr;
    socklen_t addrSize;

    char buffer[1024];

    int n;

    sock = socket(AF_INET, SOCK_STREAM, 0);

    if (sock < 0)
    {
        perror("[ - ] Socker error");
        exit(1);
    }

    printf("[ + ] TCP server socket created\n");

    memset(&addr, '\0', sizeof(addr));

    connect(sock, (struct sockaddr *)&addr, sizeof(addr));
    printf("[ + ] Connected to the server");

    bzero(buffer, 1024);
    strcpy(buffer, "Hello this is client");
    printf("Client: %s\n", buffer);
    send(sock, buffer, strlen(buffer), 0);

    bzero(buffer, 1024);
    recv(sock, buffer, strlen(buffer), 0);
    printf("Server: %s\n", buffer);

    close(sock);
    printf("Disconected from the server\n");

    return 0;
};
