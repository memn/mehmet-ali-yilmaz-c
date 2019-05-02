#include <stdio.h>
#include <stdlib.h>
#include "bubble-sort.h"
#include "linear_search.h"


int binary_search_test() {
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int *) malloc(num * sizeof(int));
    for (i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for (int j = 0; j < num; ++j) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    bubble_sort(arr, num);
    printf("%d\n", binary_search(arr, num, 7));
    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
