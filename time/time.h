//
// Created by c0025512 on 23/05/2023.
//

#ifndef APPOINTMENT_BOOKING_SYSTEM_TIME_H
#define APPOINTMENT_BOOKING_SYSTEM_TIME_H

// This struct represents a specific time in the day
typedef struct Time{
    int hour;
    int minute;
    int second;
} Time;

// Initialises a time struct to midnight, where hour, minute and second are 0
Time* initialiseTime(Time* time);
void freeTime(Time* time);


#endif //APPOINTMENT_BOOKING_SYSTEM_TIME_H
