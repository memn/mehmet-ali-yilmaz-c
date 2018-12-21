
#include <assert.h>
#include <stdio.h>
#include "functions_examples.h"


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
//    start_game();
//    for_examples();
//    stars(22);

//    some_function_examples();

    assert(12 == absoulte(12));
    assert(12 == absoulte(-12));
    assert(0 == absoulte(0));
    int max = maxOf(3, 11, 2);
    assert(11 == max);

    double n_x;
    double n_y;
    next_point(3, &n_x, &n_y);
    assert(4 == n_x);
    assert(7 == n_y);

    assert(120 == factorial(5));
    assert(5 == fibonacci(5));
    printf("%d", fibonacci(2000));
    return 0;
}