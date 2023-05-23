//
// Created by c0025512 on 23/05/2023.
//

#ifndef APPOINTMENT_BOOKING_SYSTEM_WORKDAY_H
#define APPOINTMENT_BOOKING_SYSTEM_WORKDAY_H

#include "../time/appointment.h"

typedef struct WorkDay{
    Appt* first_appt;
    size_t appts_n;
    struct WorkDay* next_day;
} WorkDay;

WorkDay* initialiseDay(WorkDay* day);
void freeDay(WorkDay* day);

typedef struct WorkWeek{
    WorkDay* first_day;
    size_t days_n;
    struct WorkWeek* next_week;
} WorkWeek;

WorkWeek* initialiseWeek(WorkWeek* week);
void freeWeek(WorkWeek* week);

#endif //APPOINTMENT_BOOKING_SYSTEM_WORKDAY_H
