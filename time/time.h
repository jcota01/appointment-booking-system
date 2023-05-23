//
// Created by c0025512 on 23/05/2023.
//

#ifndef APPOINTMENT_BOOKING_SYSTEM_TIME_H
#define APPOINTMENT_BOOKING_SYSTEM_TIME_H

#include "appointment.h"

// This struct represents a specific time in the day
typedef struct Time{
    int hour;
    int minute;
    int second;
} Time;

// Initialises a time struct to midnight, where hour, minute and second are 0
Time* initialiseTime(Time* time);

typedef struct WorkDay{
    Appt* appts;
} WorkDay;

typedef struct WorkWeek{
    WorkDay days[5];
} WorkWeek;


#endif //APPOINTMENT_BOOKING_SYSTEM_TIME_H
