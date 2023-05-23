//
// Created by c0025512 on 23/05/2023.
//

#ifndef APPOINTMENT_BOOKING_SYSTEM_CLIENT_H
#define APPOINTMENT_BOOKING_SYSTEM_CLIENT_H

typedef struct Client{
    char* Name;
} Client;

Client* initialiseClient(Client* client, char* name);
void freeClient(Client* client);

#endif //APPOINTMENT_BOOKING_SYSTEM_CLIENT_H
