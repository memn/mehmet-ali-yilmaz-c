//
// Created by Mehmet Emin Mumcu on 23.11.2018.
//


#include <stdio.h>
#include "io_examples.h"


void fprintf_examples() {
    FILE *fp;
    fp = fopen("notlar.txt", "w+");

    printf("Ogrenci notlarini dosyaya gececegiz. Talimatlari uygula.\n");
    printf("Kac ogrenci var? ");
    int ogrenci_sayisi;
    scanf("%d", &ogrenci_sayisi);
    printf("Aralarinda bosluk birakarak asagidaki degerleri gir:\n");
    printf("ogrenci_numarasi(int) ogrenci_adi(string) not(float)\n");
    for (int i = 0; i < ogrenci_sayisi; i++) {
        int ogrenci_numarasi;
        char ogrenci_adi[30];
        float not;
        scanf("%d %s %f", &ogrenci_numarasi, ogrenci_adi, &not);
        fprintf(fp, "%d %s %.2f\n", ogrenci_numarasi, ogrenci_adi, not);
    }
    fclose(fp);
}

void printf_examples() {
    double d1 = 5.0;

    printf("value casted to float:%f, times 2: %f", d1, d1 * 2);
    printf("\n");
    printf("value as double: %lf", d1);
    printf("\n");
    printf("value as double: %.2lf", d1);
    printf("\n");
    printf("value as double: %.10lf", d1);
    printf("\n");
    printf("value as double: %.22lf", d1);
    printf("\n");

    char c = 'c';
    char d = 'd';

    printf("%c", c);
    printf("\n");
    printf("%c", d);
    printf("\n");

    printf("%d", c + d);
    printf("\n");
    printf("%i", c - d);
    printf("\n");

    char *str = "naber mehmet ali?";
    printf("burada da bir seyler var?\t%s", str);
    printf("\n");

    unsigned int i = 0xFF;
    printf("%u", i);
    printf("\n");
    printf("%x", i);
    printf("\n");

}

void fscanf_examples() {
    FILE *fp;
    fp = fopen("notlar.txt", "r");

    int ogrenci_numarasi;
    char ogrenci_adi[30];
    float not;
    float sum = 0;
    printf("ogrenci_numarasi(int) ogrenci_adi(string) not(float)\n");
    for (int i = 0; i < 3; ++i) {
        fscanf(fp, "%d %s %f\n", &ogrenci_numarasi, ogrenci_adi, &not);
        printf("%d %s %.2f\n", ogrenci_numarasi, ogrenci_adi, not);
        sum = sum + not;
    }
    printf("notların ortalaması:%.2f ", sum / 3);
    fclose(fp);


}

void scanf_examples() {

//    scanf_float_int();

    char soz[25];
    printf("bana bir seyler soyle: ");
    scanf("%s", soz);
    printf("%s", soz);

    char soz2[2];
    printf("bana baska bir seyler soyle: ");
    scanf("%s", soz2);
    printf("%s", soz2);

}

void scanf_float_int() {
    int kullanici_yasi;
    printf("bana yasini soyle: ");
    scanf("%d", &kullanici_yasi);
    printf("yani yasin bu mu: %d", kullanici_yasi);
    printf("\n");
    double maas = 1000.50;
    double zam = 100.25;
    printf("su anki maasin bu: %.1f, maasina ne kadar zaman yapalim?\n", maas);
    printf("normalde %.2f kadar zam yapilacak. ", zam);
    scanf("%lf", &zam);
    printf("senin istedigin toplam miktar: %f", maas + zam);
    printf("\n");
}