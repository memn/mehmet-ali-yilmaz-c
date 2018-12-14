//
// Created by Mehmet Emin Mumcu on 14.12.2018.
//

#include "number_guess.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

const int DENEME_SAYISI = 5;

void start_game() {
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
    scanf("%d", &tahmin);
    int tahmin_sayısı = 1;
    while (tahmin != sayi) {
        printf("Bilemedin!!! Yeni tahmin (-1 cikis): \n");
        scanf("%d", &tahmin);
        tahmin_sayısı += 1;
        if (tahmin == -1 || tahmin_sayısı == DENEME_SAYISI)
            break;

    }

    if (tahmin == sayi) {
        printf("Tebrikler!!!\n");
    } else {
        printf("Bilemedigin deger: %d \n", sayi);
        printf("Bir daha bekleriz!!");
    }

    printf("Gorusuruz!!!\n");
}