#define SIZE 25

typedef struct {
    int st_id;
    char st_name[20];
} stu_t;

typedef struct {
    stu_t data[SIZE];
} stack_t;

int top = -1;

void print_stack() {

}

void push(stu_t stu, stack_t stack) {
    top++;
    stack.data[top] = stu;
}

void pop(stack_t stack) {
}

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == SIZE - 1;
}

