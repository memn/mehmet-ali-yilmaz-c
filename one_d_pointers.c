//
// Created by Mehmet Mumcu on 25.01.2019.
//

#include "one_d_pointers.h"
#include <stdio.h>

void fx(double **p) {
    (*p)++;
}

void printArr(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printf2Darr(int arr[][10], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < 10; ++j) {
            //    printf("%d", arr[i][j]);
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}

void one_d_pointers_example() {
    int liste[10] = {0};
    int *liste_ptr = liste;

    liste[0] = 726;
    *(liste_ptr + 2) = 22; // liste[2] = 22;

    for (int i = 0; i < 10; ++i) {
        printf("%d, ", liste[i]);
    }


    double num[3] = {7.5, 5.0, 2.5}; // create array
    double *pp = num;       // hold start address
    printf("%p %0.1f\n", pp, *pp);  //
    fx(&pp); //
    printf("%p %0.1f\n", pp, *pp);


    int table[3][10] = {0};
    table[2][2] = 5;

    int two_two = *(*(table + 2) + 2);
    printArr(table[2], 4);
    printf("%d", two_two);

    table[2][5] = 5;
    *(*(table+1)+6) = 12;
    printf2Darr(table, 3);


}