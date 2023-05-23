//
// Created by c0025512 on 23/05/2023.
//

#include <stdlib.h>
#include "appointment.h"

Appt* initialiseAppointment(Appt* appt){
    if (appt == NULL){
        appt = malloc(sizeof(Appt));
        if (appt == NULL){
            return NULL;
        }
    }

    appt->start_time = initialiseTime(NULL);
    appt->end_time = initialiseTime(NULL);
    appt->date = initialiseDate(NULL);
    appt->client = initialiseClient(NULL, NULL);
}

void freeAppointment(Appt* appt){
    if(appt != NULL) {
        freeTime(appt->start_time);
        freeTime(appt->end_time);
        freeDate(appt->date);
        freeClient(appt->client);
        freeAppointment(appt->next);
        free(appt);
    }
}