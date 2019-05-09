//
// Created by Mehmet Mumcu on 9.05.2019.
//

#ifndef MEHMET_ALI_YILMAZ_C_QUEUE_H
#define MEHMET_ALI_YILMAZ_C_QUEUE_H

#include <stdbool.h>

#define SIZE 10

typedef struct {
    int st_id;
    char *st_name;
} stu_t;


typedef struct {
    int front, rear;
    stu_t data[SIZE];
} queue_t;


bool enqueue(stu_t student, queue_t* queue);

stu_t dequeue(queue_t* queue);

bool isEmpty(queue_t queue);

bool isFull(queue_t queue);

void printQueue(queue_t queue);

int size(queue_t queue);

#endif //MEHMET_ALI_YILMAZ_C_QUEUE_H
