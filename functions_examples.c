//
// Created by Mehmet Emin Mumcu on 21.12.2018.
//

#include "functions_examples.h"
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int pow2(int x) {
    int result = x * x;
    printf("%d", result);
    return 0;
}

void some_function_examples() {
    int in;
    while (true) {
        scanf("%d", &in);
        if (in < 0) {
            return;
        }
        printf("%d\n", pow2(in));

    }
}

// x**2 + 5
int f(int x) {
    return pow2(x) + 5;
}

void print_pow2(int x) {
    int result = x * x;
    printf("%d", result);
}

double absoulte(double x) {
    if (x >= 0) {
        return x;
    } else {
        return -x;
    }
}

int max(int, int);

void fact_iterative(int x);

// 4 8 10
int maxOf(int x, int y, int z) {
    return max(max(x, y), z);
}

int max(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}

double func(double x) {
    return x + 3;
}

void next_point(double x, double *next_x, double *next_y) {
    *next_x = x + 1;
    *next_y = func(x + 1);
}

// x * x-1 * x-2 * ... 1
// x * fact(x-1)
// x = 2 : 2 * fact(1)
// x is defined in Z+
int factorial(int x) {
    assert(x > 0);
    if (x == 1)
        return 1;
    return x * factorial(x - 1);
}

void fact_iterative(int x) {

    int result = 1;
    for (int i = 2; i <= x; ++i) {
        result *= i;
    }
}

// fibo(n) = fibo(n-1) + fibo(n-2)
int fibonacci(int x) {
    if (x == 1 || x == 2) {
        return 1;
    }
    return fibonacci(x - 1) + fibonacci(x - 2);
//    return fibonacci_iterative(x);
}

int fibonacci_iterative(int x) {
    int first = 1;
    int second = 1;
    int result = 0;
    for (int i = 3; i < x + 1; ++i) {
        result = first + second;
        first = second;
        second = result;
    }
    return result;
}

void functions_testing() {
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
}
