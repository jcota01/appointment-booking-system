//
// Created by c0025512 on 23/05/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include "workday.h"

WorkDay* initialiseDay(WorkDay* day){
    if (day == NULL){
        day = malloc(sizeof(WorkDay));
        if (day == NULL){
            return NULL;
        }
    }

    day->appts_n = 0;
    day->first_appt = NULL;
    day->next_day = NULL;

    return day;
}

void freeDay(WorkDay* day){
    if (day != NULL){
        freeAppointment(day->first_appt);
        freeDay(day->next_day);
        free(day);
    }
}

WorkWeek* initialiseWeek(WorkWeek* week){
    // if null has been pass
    if (week == NULL){
        // Allocate memory for week struct
        week = malloc(sizeof(WorkWeek));
        // If memory allocation failed
        if (week == NULL){
            // Return NULL
            return NULL;
        }
    }

    // Set values to default
    week->days_n = 0;
    week->first_day = NULL;
    week->next_week = NULL;

    return week;
}

void freeWeek(WorkWeek* week){
    if (week != NULL){
        freeDay(week->first_day);
        freeWeek(week->next_week);
        free(week);
    }
}