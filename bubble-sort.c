#include <stdbool.h>

//
// Created by Mehmet Mumcu on 24.04.2019.
//
void swap4(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int *arr, int size) {
    bool sorted = false;
    // 1 5 2 3 4
    for (int k = 0; k < size && !sorted; ++k) {
        sorted = true;
        for (int i = 0; i < size - (1 + k); ++i) {
            if (arr[i] > arr[i + 1]) {
                // i index ile i+1 indexinin yerini değiştir
                sorted = false;
                swap4(&arr[i], &arr[i + 1]);
            }
        }
    }


}
