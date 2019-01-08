//
// Created by Mehmet Emin Mumcu on 8.01.2019.
//

#include "pointers1.h"

void swapNew(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void reverse(int arr[], int size) {

    for (int start = 0, end = size - 1; start < end; ++start, --end) {
        swapNew(&arr[start], &arr[end]);
    }

}