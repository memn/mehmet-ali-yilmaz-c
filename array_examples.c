//
// Created by Mehmet Emin Mumcu on 4.01.2019.
//

#include <stdio.h>
#include "array_examples.h"

double avg(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}


void student_note_average_example() {
    // kullanicidan ogrenci sayisi al
    int stdCount;
    scanf("%d", &stdCount);

    int notes[stdCount]; // not tablosu olusturuldu
    for (int i = 0; i < stdCount; ++i) {
        scanf("%d", &notes[i]); // notlar sirayla istendi.
    }

    double average = avg(notes, stdCount);
    printf("\n%f\n", average);
}