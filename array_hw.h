//
// Created by Mehmet Emin Mumcu on 4.01.2019.
//

#ifndef MEHMET_ALI_YILMAZ_C_ARRAY_HW_H
#define MEHMET_ALI_YILMAZ_C_ARRAY_HW_H

#define COLUMN_SIZE 9
#define ROW_SIZE 9

#define FILE "matrix.txt"

int matrix[ROW_SIZE][COLUMN_SIZE];

void generateRandomMatrix(char *filename, int randomMin, int randomMax); // only generate file, do not fill matrix!!

void readMatrixFromFile(char *filename); // fill matrix

int minInColumn(int column); // obvious

int maxInColumn(int column);

int minInRow(int row);

int maxInRow(int row);

int diagonalDiff();

void test();


#endif //MEHMET_ALI_YILMAZ_C_ARRAY_HW_H
