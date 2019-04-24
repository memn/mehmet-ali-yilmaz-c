#include <stdio.h>
#include <stdlib.h>

void swap3(int *arr, int x, int y) {
    int temp;
    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int main() {
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int *) malloc(num * sizeof(int));
    for (i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    for (int j = 0, i = num - 1; j < i; ++j, i--) {
        swap3(arr, j, i);
    }



    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
