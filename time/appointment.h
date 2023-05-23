//
// Created by c0025512 on 23/05/2023.
//

#ifndef APPOINTMENT_BOOKING_SYSTEM_APPOINTMENT_H
#define APPOINTMENT_BOOKING_SYSTEM_APPOINTMENT_H

#include "time.h"
#include "date.h"
#include "../client/client.h"

typedef struct Client_Appointment{
    Time* start_time;
    Time* end_time;
    Date* date;
    Client* client;
    struct Client_Appointment* next;
} Appt;

Appt* initialiseAppointment(Appt* appt);
void freeAppointment(Appt* appt);

#endif //APPOINTMENT_BOOKING_SYSTEM_APPOINTMENT_H
