//
// Created by max on 19/11/2020.
//

#ifndef PROJETJUNGLE_CLIENT1_H
#define PROJETJUNGLE_CLIENT1_H

#define WIN32_LEAN_AND_MEAN

#include "../echiquier.h"


// Need to link with Ws2_32.lib, Mswsock.lib, and Advapi32.lib
#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")


#define DEFAULT_BUFLEN 1024
#define DEFAULT_PORT "8888"

int send_server(char *sendbuf);

int __cdecl app_client1(char *srvAdd, char *sendbuffer);

#endif //PROJETJUNGLE_CLIENT1_H
