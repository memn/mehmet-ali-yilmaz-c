//
// Created by Mehmet Emin Mumcu on 14.12.2018.
//

#include "loops.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

void do_while() {

    printf("Oncelikle aralikta anlasalim: baslangic bitis\n");
    int baslangic, bitis;
    scanf("%d %d", &baslangic, &bitis);

    assert(baslangic <= bitis);
    assert(baslangic >= 0);

    int diff = bitis - baslangic;
    srand(time(NULL));   // Initialization, should only be called once.
    int sayi = rand() % diff;
    sayi += baslangic;

    printf("Tahminleri alalim: \n");
    int tahmin;
    int tahmin_sayısı = 0;
    do {
        scanf("%d", &tahmin);
        tahmin_sayısı++;
    } while (tahmin != sayi && tahmin_sayısı < 5);

    if (tahmin == sayi) {
        printf("Tebrikler!!!\n");
    } else {
        printf("Bilemedigin deger: %d \n", sayi);
        printf("Bir daha bekleriz!!");
    }


    printf("Gorusuruz!!!\n");


}

void stars(int num) {

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    for (int i = 1; i <= num; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
}
