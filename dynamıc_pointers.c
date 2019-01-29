//
// Created by Mehmet Mumcu on 25.01.2019.
//

#include "dynamıc_pointers.h"
#include <stdio.h>
#include <stdlib.h>

void sizeof_examples() {

    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(double));

    int x;
    printf("%d\n", sizeof x);
}


void create_arr_and_print() {
    int size = 10;
    int *arr = (int *) malloc(sizeof(int) * size);
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void malloc_examples() {
    double *y;
    y = (double *) malloc(sizeof(double));
    *y = 1.21;
    printf("%lf ", *y);

}


void dynamic_pointers_examples() {
    create_arr_and_print();
}


void two_d_matrix_dynamic() {
    // int matrix[3][4]
    int **matrix;


}

void d_arr_examples_2() {
    int row = 3;
    int column = 5;
    int **matrix = (int **) malloc(sizeof(int *) * row);

    for (int i = 0; i < row; ++i) {
        matrix[i] = malloc(column * sizeof(int));
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            matrix[i][j] = i * j;
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; ++i) {
        free(matrix[i]);
    }
    free(matrix);
}

