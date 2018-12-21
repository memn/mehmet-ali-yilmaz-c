//
// Created by Mehmet Emin Mumcu on 21.12.2018.
//

#ifndef MEHMET_ALI_YILMAZ_C_FUNCTIONS_EXAMPLES_H
#define MEHMET_ALI_YILMAZ_C_FUNCTIONS_EXAMPLES_H


// return_type func_name(*optional_params_separated_with_comma*);
int pow2(int);

//double f(int, int, double, char, int, int);

void some_function_examples();

// mutlak deger fonksiyonu
double absoulte(double);

int maxOf(int, int, int);

// checks given text is pallindrome or not
// if true return 1 else 0
int pallindromeCheck(char *text, int size);


// calculate next point of f(x) = x + 3
void next_point(double, double *next_x, double *next_y);

// recursives
// factorial
int factorial(int);

// fibonacci
int fibonacci(int);


#endif //MEHMET_ALI_YILMAZ_C_FUNCTIONS_EXAMPLES_H
