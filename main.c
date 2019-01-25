


#include "dynamıc_pointers.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
    dynamic_pointers_examples();


//  []  [0, 1, 2, 4 , 9],
//  []  [3, 4, 5, 4 , 9],
//  []  [6, 7, 8, 4 , 9],

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

    return 0;
}

