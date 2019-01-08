#include <stdio.h>
#include "pointers1.h"


void printArr(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

int main() {
//    fprintf_examples();
//    fscanf_examples();

//    ornek();
//    if_else_examples();
//    if_fonksiyon();
//    calculator();
//    string_compare();
//    lazy();
//    switch_example();
//    bank_ops();
//    start_game();
//    for_examples();
//    stars(22);

//    some_function_examples();
//    functions_testing();
//    student_note_average_example();


    int arr[] = {3, 4, 5, 6, 7};
    printArr(arr, 5);
    reverse(arr, 5);
    printArr(arr, 5);


    return 0;
}

