//
// Created by c0025512 on 23/05/2023.
//

#include <stdlib.h>
#include "client.h"

Client* initialiseClient(Client* client, char* name){
    if (client == NULL){
        client = malloc(sizeof(Client));
        if (client == NULL){
            return NULL;
        }
    }

    client->Name = name;
    return client;
}

void freeClient(Client* client){
    if (client != NULL) {
        free(client->Name);
        free(client);
    }
}