//
// Created by Mehmet Emin Mumcu on 4.01.2019.
//

#include "string_ops.h"
#include "user_defined_funcs2.h"
#include <stdio.h>
#include <string.h>

void string_examples(char *cumle) {
    printf("%s\n", cumle);
    int size = strlen(cumle); // uzunluk
    printf("%d", size);

    int students[10]; // 10 elemani aninda olusturur.

    int notes[] = {3, 5, 6};

    for (int i = 0; i < 10; ++i) {
        students[i] = i + 1;
    }

    int *pr = &students[9] + 1;

    *pr = -1;
    students[10] = 11;

    printf("%p\n", &students[10]);
    printf("%p\n", pr);

    printf("%d\n", students[9]);
    printf("%d\n", *pr);

    string str[] = {"ilk", "ikinci"};

    for (int i = 0; i < 2; ++i) {
        printf("%s\n", str[i]);
    }


}