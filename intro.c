//
// Created by Mehmet Emin Mumcu on 2.11.2018.
//

#include "intro.h"

void intro_chapter() {
    double d1 = 5.4 * 2 - 13.6 + 18 / 2;
    d1 += 0.5;
    int i = (int) d1;
    printf("%f\n", d1);
    printf("%d\n",i);


    int x = 5;
    int y = x++; // y = 5, x=6
//    y = x;
//    x = x+1;

    int z = ++x; // x = 7, z = 7
    x = x+1;
    z=x;

}