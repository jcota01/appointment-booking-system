//
// Created by c0025512 on 23/05/2023.
//

#ifndef APPOINTMENT_BOOKING_SYSTEM_BUSINESS_H
#define APPOINTMENT_BOOKING_SYSTEM_BUSINESS_H

#include "../time/time.h"

typedef struct Business{
    char name[30];
    Time start_time;
    Time close_time;
    WorkWeek* week;
} Business;

#endif //APPOINTMENT_BOOKING_SYSTEM_BUSINESS_H
