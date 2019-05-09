//
// Created by Mehmet Mumcu on 9.05.2019.
//

#include "queue.h"
#include "stdio.h"


void printStudent(stu_t student) {
    printf("id: %d \t name: %s", student.st_id, student.st_name);
}

int size(queue_t queue) {
    return queue.rear - queue.front;
}

// f sabit
// r kaydir
bool enqueue(stu_t student, queue_t *queue) {
    if (!isFull(*queue)) {
        int place = queue->rear % SIZE;
        queue->data[place] = student;
        queue->rear++;
        printf("DEQUEUE SUCCESS: ");
        printStudent(student);
        printf("\n");
        return true;
    } else {
        printf("ENQUEUE FAIL: ");
        printStudent(student);
        printf("\n");
        return false;
    }
}

// r sabit
// f kaydir
stu_t dequeue(queue_t *queue) {
    if (!isEmpty(*queue)) {
        int place = queue->front % SIZE;
        stu_t student = queue->data[place];
        queue->front++;
        printf("ENQUEUE SUCCESS: ");
        printStudent(student);
        printf("\n");
        return student;
    } else {
        stu_t stu = {};
        printf("DEQUEUE FAIL EMPTY");
        printf("\n");
        return stu;
    }
}

bool isEmpty(queue_t queue) {
    return size(queue) == 0;
}

bool isFull(queue_t queue) {
    int full = size(queue);
    return SIZE - full == 0;
}

void printQueue(queue_t queue) {
    if (isEmpty(queue)) {
        printf("QUEUE is empty.");
    } else
        for (int i = queue.front; i < queue.rear; ++i) {
            printStudent(queue.data[i % SIZE]);
            printf("\n");
        }
}
