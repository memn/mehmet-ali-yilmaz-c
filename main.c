#include <stdio.h>
#include "intro_example.h"
#include "io_examples.h"

void ornek();

int main() {
//    fprintf_examples();
//    fscanf_examples();

    ornek();
    if_else();

    return 0;
}

void ornek() {
    char cumle[30];
    fgets(cumle, 30, stdin);
    printf("%s", cumle);
}

