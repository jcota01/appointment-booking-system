//
// Created by c0025512 on 23/05/2023.
//

#include <stdlib.h>
#include "date.h"

Date* initialiseDate(Date* date){
    if (date == NULL){
        date = malloc(sizeof(Date));
        if (date == NULL){
            return NULL;
        }
    }

    date->day = 1;
    date->month = January;
    date->year = 2023;

    return date;
}

void freeDate(Date* date){
    if (date != NULL){
        free(date);
    }
}