//
// Created by c0025512 on 23/05/2023.
//

#ifndef APPOINTMENT_BOOKING_SYSTEM_APPOINTMENT_H
#define APPOINTMENT_BOOKING_SYSTEM_APPOINTMENT_H

#include "time.h"
#include "../client/client.h"

typedef struct Client_Appointment{
    Time start_time;
    Time end_time;
    Client client;
} Appt;

#endif //APPOINTMENT_BOOKING_SYSTEM_APPOINTMENT_H
