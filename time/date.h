//
// Created by c0025512 on 23/05/2023.
//

#ifndef APPOINTMENT_BOOKING_SYSTEM_DATE_H
#define APPOINTMENT_BOOKING_SYSTEM_DATE_H

typedef enum Day{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
} Day;

typedef enum Month{
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
} Month;

int monthToNum(Month* month);

typedef struct Date{
    int day;
    Month month;
    int year;
} Date;

#endif //APPOINTMENT_BOOKING_SYSTEM_DATE_H
