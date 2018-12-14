
#include <stdio.h>
#include "loops.h"


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
    stars(22);

    // aralik 10 20
    int sayi;
    int tahmin = 12;
    do {
        scanf("%d", &sayi);
        if (sayi < 0) {
            continue; // basa don!
        }
    } while (sayi != tahmin);


    return 0;
}