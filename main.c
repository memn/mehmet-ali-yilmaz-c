

#include "student.h"
#include "linked-list.h"

int main() {

    student_t stu = {33, "A1", 32};
    student_t stu2 = {22, "A2", 123213};

    node_t *list_head = NULL;

    printf("%d\n", sizeL(list_head)); // 0

    list_head = add(NULL, stu);

    list_head = delete(list_head, 0);

    printf("%d\n", sizeL(list_head)); // 1

    add(list_head, stu2);

    printf("%d\n", sizeL(list_head)); // 2

    printL(list_head);


    for (int i = 0; i < 4; ++i) {
        student_t inst = {i, "A1", 32};
        list_head = insert(list_head, inst, 0);
    }

    student_t inst = {5, "A1", 32};
    list_head = insert(list_head, inst, 1);

    printL(list_head);


    return 0;
}
