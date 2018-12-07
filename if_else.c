//
// Created by Mehmet Emin Mumcu on 7.12.2018.
//

#include "if_else.h"
#include <stdio.h>
#include <assert.h>

void if_else_examples() {

    int sayi1, sayi2;

    scanf("%i %i", &sayi1, &sayi2);

    if (sayi1 == 3) {
        printf("1.sayi 3 e esit\n");
    } else if (sayi1 > 2) {
        printf("1.sayi 2 den buyuk\n");
    } else {
        printf("1.sayi 3 e esit degil.\n");
    }

    if (sayi2 == 4) {
        printf("2.sayi 4 e esit\n");
    }

    if (sayi1 < sayi2) {
        printf("1.sayi 2.den kucuk\n");
    }
}

void if_fonksiyon() {
    int x;
    scanf("%d", &x);
    int y;
    if ((x % 3) == 2) {
        y = x + 5;
    } else {
        y = 21;
    }
    printf("%d", y);

}

// takes x op y from user and prints output
void calculator() {
    // + - * / %
    // usage x op y
    double x;
    double y;
    char op;
    scanf("%lf %c %lf", &x, &op, &y);
    double result = 0;
    if (op == '+')
        result = x + y;
    else if (op == '-')
        result = x - y;
    else if (op == '*')
        result = x * y;
    else if (op == '/')
        result = x / y;
    else
        result = (int) x % (int) y;

    printf("%lf", result);

}

void elvis_example() {
    int x = 5;

    x > 3 ? (x++) : (x < 1 ? x = 0 : x--);
    // condition ? true_statement : false_statement

    printf("%d", x);
}

void string_compare() {
    char *str1 = "Hi";
    char *str2 = "hi";

    if (str1 == str2) {
        printf("same");
    } else if (str1 > str2) {
        printf("%s-%s", str1, str2);
    } else {
        printf("%s-%s", str2, str1);
    }
}

void lazy() {
    int x = 5;
    scanf("%d", &x);
    // and
    if (x == 3 && ++x == 4) {
        printf("if x: %d", x);
    } else {
        printf("else x: %d\n", x);

    }


    if (x == 5 || x++ == 7) {
        printf("%d", x);
    }
}

void switch_example() {
    int x;
    scanf("%d", &x);

    switch (x) {
        case 1:
            printf("Monday\n"); // fall through
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thurday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Unknown day!!!\n");
            break;
    }
}

void bank_ops() {
    int op;
    scanf("%d", &op);

    assert(op == 1 || op == 2);

    // op 1 send_money
    // op 2 show
    switch (op) {
        case 1:
            printf("sending money...");
        case 2:
            printf("your balance is ...");
            break;
        default:
            break;
    }
}