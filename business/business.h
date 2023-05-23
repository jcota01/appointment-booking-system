//
// Created by c0025512 on 23/05/2023.
//

#ifndef APPOINTMENT_BOOKING_SYSTEM_BUSINESS_H
#define APPOINTMENT_BOOKING_SYSTEM_BUSINESS_H

#include "../time/time.h"
#include "workday.h"

typedef struct Business{
    char* name;
    Time* start_time;
    Time* close_time;
    WorkWeek* week;
} Business;

Business* initialiseBusiness(Business* business);
void freeBusiness(Business* business);

#endif //APPOINTMENT_BOOKING_SYSTEM_BUSINESS_H
