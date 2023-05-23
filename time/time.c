//
// Created by c0025512 on 23/05/2023.
//

#include <stdlib.h>
#include "time.h"

Time* initialiseTime(Time* time){
    if (time == NULL){
        time = malloc(sizeof(Time));
        if (time == NULL){
            return NULL;
        }
    }

    time->hour = 0;
    time->minute = 0;
    time->second = 0;

    return time;
}

void freeTime(Time* time){
    if (time != NULL){
        free(time);
    }
}