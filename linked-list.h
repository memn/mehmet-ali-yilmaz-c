//
// Created by Mehmet Mumcu on 18.05.2019.
//

#ifndef MEHMET_ALI_YILMAZ_C_LINKED_LIST_H
#define MEHMET_ALI_YILMAZ_C_LINKED_LIST_H

#include <stdbool.h>
#include <stddef.h>
#include "student.h"


typedef struct node_s {
    student_t data;
    struct node_s *next;
} node_t;

node_t *get(node_t *head, int index);

node_t *add(node_t *head, student_t);

node_t *insert(node_t *, student_t, int);

node_t *delete(node_t *, int);

void printL(node_t *head);

bool isEmptyL(node_t *head);

int sizeL(node_t *head);

#endif //MEHMET_ALI_YILMAZ_C_LINKED_LIST_H
