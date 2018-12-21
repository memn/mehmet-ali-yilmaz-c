//
// Created by Mehmet Emin Mumcu on 21.12.2018.
//

#include <stdio.h>

void printingNumber(int);

int main_() {
    int a, b;
    scanf("%d\n%d", &a, &b);
    // Complete the code.

    for (int i = a; i <= b; i++) {
        printingNumber(i);
        printf("\n");
    }

    return 0;
}

void printingNumber(int number) {
    if (number < 10) {
        switch (number) {
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }
    } else {
        if (number % 2 == 0)
            printf("even");
        else
            printf("odd");
    }
}