//
// Created by Mehmet Emin Mumcu on 4.01.2019.
//
#include <stdio.h>
#include "user_defined_funcs2.h"

void PrintNextDay(enum WEEK_DAYS today) {
    enum WEEK_DAYS nextDay = (today + 1) % 7;
    int x;
    switch (nextDay){
        case MONDAY:printf("MONDAY");break;
        case TUESDAY:printf("TUESDAY");break;
        case WEDNESDAY:printf("WEDNESDAY");break;
        case THURSDAY:printf("THURSDAY");break;
        case FRIDAY:printf("FRIDAY");break;
        case SATURDAY:printf("SATURDAY");break;
        case SUNDAY:printf("SUNDAY");break;
        default: printf("Unknown");break;
    }

}

void PrintYesterday(weekday today){
    weekday yesterday = (today + 6) % 7;
    switch (yesterday){
        case MONDAY:printf("MONDAY"); break;
        case TUESDAY:printf("TUESDAY"); break;
        case WEDNESDAY:printf("WEDNESDAY"); break;
        case THURSDAY:printf("THURSDAY"); break;
        case FRIDAY:printf("FRIDAY"); break;
        case SATURDAY:printf("SATURDAY"); break;
        case SUNDAY:printf("SUNDAY"); break;
    }
}




