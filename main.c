#include <stdio.h>
#include "number_guess.h"

void ornek();

int main() {
//    fprintf_examples();
//    fscanf_examples();

//    ornek();
//    if_else_examples();
//    if_fonksiyon();
//    calculator();
//    string_compare();
//    lazy();
//    switch_example();
//    bank_ops();
    start_game();
    return 0;
}

void ornek() {
    char cumle[30];
    fgets(cumle, 30, stdin);
    printf("%s", cumle);
}

