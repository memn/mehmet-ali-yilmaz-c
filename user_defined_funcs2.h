//
// Created by Mehmet Emin Mumcu on 4.01.2019.
//

#ifndef MEHMET_ALI_YILMAZ_C_USER_DEFINED_FUNCS2_H
#define MEHMET_ALI_YILMAZ_C_USER_DEFINED_FUNCS2_H

#include <stdbool.h>

void static_testing(int a);

typedef enum WEEK_DAYS {
    MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
} weekday;

typedef double money;

typedef char *string;

void PrintNextDay(enum WEEK_DAYS today);

void PrintYesterday(weekday today);


#endif //MEHMET_ALI_YILMAZ_C_USER_DEFINED_FUNCS2_H
