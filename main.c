

#include "queue.h"

int main() {

    queue_t queue;
    queue.rear = 0;
    queue.front = 0;

    stu_t stu = {1, "A1"};

    for (int i = 1; i < 15; ++i) {
        stu.st_id = i;
        enqueue(stu, &queue);
    }
    printQueue(queue);
    for (int i = 1; i < 3; ++i) {
        dequeue(&queue);
    }

    printQueue(queue);

    for (int i = 1; i < 12; ++i) {
        dequeue(&queue);
    }

    printQueue(queue);

    return 0;
}
