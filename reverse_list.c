//
// Created by Mehmet Mumcu on 25.05.2019.
//

#include "reverse_list.h"
#include <stdlib.h>


bool isLast(node_t *node) {
    return node->next == NULL;
}

student_t pop_from_list(node_t *head) {
    // start from head
    // go until next is null
    // when next is null
    // it is last element
    if (isEmptyL(head)) {
        return head->data;
    }

    if (isLast(head)) {
        student_t student = head->data;
        free(head);
        return student;
    }

    node_t *s = head;
    while (!isLast(s->next)) {
        s = s->next;
    }
    node_t *last = s->next;
    student_t data = last->data;
    s->next = NULL;
    free(last);
    return data;
}

node_t *reverse_list(node_t *head) {
    node_t *new_head = NULL;

    while (!isEmptyL(head)) {
        // pop from last
        student_t stu = pop_from_list(head);
        // add to new
        new_head = add(new_head, stu);
    }
};