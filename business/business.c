//
// Created by c0025512 on 23/05/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include "business.h"

Business* initialiseBusiness(Business* business){
    if (business == NULL){
        business = malloc(sizeof(Business));
    }

    business->name = malloc(30 * sizeof(char));
    business->start_time = malloc(sizeof(Time));
    business->close_time = malloc(sizeof(Time));
    business->week = initialiseWeek(NULL);

    return business;
}

void freeBusiness(Business* business){
    free(business->name);
    freeTime(business->start_time);
    freeTime(business->close_time);
    freeWeek(business->week);
}