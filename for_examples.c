//
// Created by Mehmet Emin Mumcu on 14.12.2018.
//

#include "for_examples.h"
#include <stdio.h>
#include <stdbool.h>

const int DENEME = 5;

void for_examples() {
//    while (cond){
//        statements
//    }

    //for (initialization; control; update )

    int i = 66;
    for (; false;) {
        printf("%d\n", i);
        if (i == DENEME) {
            break;
        }
    }




}
