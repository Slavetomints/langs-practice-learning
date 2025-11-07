#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>

#define PORT 8080

int main(int argc, char const* argv[]) {

    int servSockD = socket(AF_INET, SOCK_STREAM, 0);

    char serverMessage[255] = "Hello from server land!";

    struct sockaddr_in servAddr;

    servAddr.sin_family = AF_INET;
    servAddr.sin_port = htons(PORT);
    servAddr.sin_addr.s_addr = INADDR_ANY;

    bind(servSockD, (struct sockaddr*)&servAddr, sizeof(servAddr));

    listen(servSockD, 1);

    int clientSocket = accept(servSockD, NULL, NULL);

    send(clientSocket, serverMessage, sizeof(serverMessage), 0);

    return 0;
}