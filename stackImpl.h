//
// Created by Mehmet Mumcu on 9.05.2019.
//

#ifndef MEHMET_ALI_YILMAZ_C_STACKIMPL_H
#define MEHMET_ALI_YILMAZ_C_STACKIMPL_H

#include <stdbool.h>

#define SIZE 25

typedef struct {
    int st_id;
    char st_name[20];
} stu_t;

typedef struct {
    stu_t data[SIZE];
} stack_t;

int top = -1;

void print_stack(stack_t stack);

void push(stu_t stu, stack_t stack);

stu_t pop(stack_t stack);

bool isEmpty();

bool isFull();

#endif //MEHMET_ALI_YILMAZ_C_STACKIMPL_H
