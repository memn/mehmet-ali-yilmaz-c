//
// Created by Mehmet Mumcu on 24.04.2019.
//

#include "linear_search.h"

int binary_search2(int *, int, int, int);

int linear_search(int *arr, int size, int value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return i;
        }

    }
    return -1;
}

int linear_search_sorted(int *arr, int size, int value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return i;
        }
        if (arr[i] > value) {
            return -1;
        }
    }
    return -1;
}

int binary_search(int *arr, int size, int value) {
    int middle = size / 2;
    if (arr[middle] == value) {
        return middle;
    } else if (arr[middle] > value) {
        // go left
        return binary_search2(arr, 0, middle - 1, value);

    } else {
        // go right
        return binary_search2(arr, middle + 1, size - 1, value);
    }
}

int binary_search2(int *arr, int start, int end, int value) {
    int middle = (end + start) / 2;
    if (end == start) {
        if (value == arr[end])
            return start;
        else
            return -1;
    }

    if (arr[middle] == value) {
        return middle;
    } else if (arr[middle] > value) {
        // go left
        return binary_search2(arr, start, middle - 1, value);

    } else {
        // go right
        return binary_search2(arr, middle + 1, end, value);
    }
}