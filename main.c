

int columnSum(int matrix[3][5], int theColumn);

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

    int matrix[3][5];


    return 0;
}

int rowSum(int matrix[3][5], int theRow) {
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += matrix[theRow][i];
    }
    return sum;
}

int columnSum(int matrix[3][5], int theColumn) {
    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum += matrix[i][theColumn];


    }
    return sum;

}