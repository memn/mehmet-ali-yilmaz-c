//
// Created by Mehmet Emin Mumcu on 2.11.2018.
//

#include "pointers.h"

void swap(int * par1, int * par2){
    int temp = *par1;
    *par1 = *par2;
    *par2 = temp;
}

void square(int number, int* result) {
    *result = number * number;
}

void ptr_chapter_3() {
    int in1 = 10;
    int in2 = 876;
    printf("in1:%d   in2:%d \n", in1, in2);
    swap(&in1, &in2);
    printf("in1:%d   in2:%d \n", in1, in2);
}

void ptr_chapter_2() {
    int arr[3];
    arr[0] = 3;
    arr[1] = 762;
    arr[2] = -15;
    int * arrPtr = arr;

    printf("%d\n", *arrPtr);
    printf("%d\n", *(arrPtr+1));
    printf("%d\n", *arrPtr + 1); // 4
    printf("%d\n", *(arrPtr+2));

    *(arrPtr+2) = 12;
    printf("%d\n", arr[2]);

    printf("%p\n", arrPtr);
    printf("%p\n", arrPtr+1);
    printf("%p\n", arrPtr+2);


    printf("\n");

    char cArr[3];
    cArr[0] = 'a';
    cArr[1] = 'b';
    cArr[2] = 'c';

    char* carrPtr = cArr;

    printf("%p\n", carrPtr);
    printf("%p\n", carrPtr+1);
    printf("%p\n", carrPtr+2);
}

void ptr_chapter_1() {
    int sayi = 5;
    sayi = sayi*10;
    printf("%d\n", sayi);
    printf("%p\n", &sayi);
    int * sayiPtr = &sayi;
    printf("%p\n", sayiPtr);
    *sayiPtr = 10;
    printf("%d\n",sayi);
    printf("%p\n", &sayi);

    char c = 'a';
    char* cPtr = &c;
    *cPtr = 's';
    printf("%c\n", c);

    int expected;
    square(10, &expected);
    printf("%d\n", expected);

    int input1;
    int input2;
    scanf("%d %d",&input1, &input2);

    printf("\n%d\n", input1*input2);
}