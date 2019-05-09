//
// Created by Mehmet Mumcu on 9.05.2019.
//

#include "stackImpl.h"

void print_stack(stack_t stack) {
}

void push(stu_t stu, stack_t stack) {
    top++;
    stack.data[top] = stu;
}

stu_t pop(stack_t stack) {
    top--;
    return stack.data[top];
}

bool isEmptyStack() {
    return top == -1;
}

bool isFullStack() {
    return top == SIZE - 1;
}

