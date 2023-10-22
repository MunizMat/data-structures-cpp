#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main()
{
    char *ip = "127.0.0.1";
    int port = 5566;

    int serverSocket, clientSocket;
    struct sockaddr_in serverAddr, clientAddr;
    socklen_t addrSize;

    char buffer[1024];

    int n;

    serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    if (serverSocket < 0)
    {
        perror("[ - ] Socker error");
        exit(1);
    }

    printf("[ + ] TCP server socket created\n");

    memset(&serverAddr, '\0', sizeof(serverAddr));

    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = port;
    serverAddr.sin_addr.s_addr = inet_addr(ip);

    n = bind(serverSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr));

    if (n < 0)
    {
        perror("[ - ] Bind error");
        exit(1);
    }

    printf("[ + ] Bind to the port number: %d\n", port);

    listen(serverSocket, 5);
    printf("Listening...\n");

    while (1)
    {
        addrSize = sizeof(clientAddr);
        clientSocket = accept(serverSocket, (struct sockaddr *)&clientAddr, addrSize);

        printf("[ + ] Client connected\n");

        bzero(buffer, 1024);
        recv(clientSocket, buffer, sizeof(buffer), 0);
        printf("Client: %s\n", buffer);

        bzero(buffer, 1024);
        strcpy(buffer, "Hi this is server");
        printf("Server: %s\n", buffer);
        send(clientSocket, buffer, strlen(buffer), 0);

        close(clientSocket);
        printf("[ + ] Client disconected\n\n");
    }

    return 0;
};
