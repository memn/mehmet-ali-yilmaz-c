//
// Created by Mehmet Mumcu on 29.01.2019.
//


#include <stdlib.h>
#include <stdio.h>

typedef double para;
typedef struct student_type {
    int id;
    char *name;
    char *surname;
    float cgpa;
} student;

typedef struct item_type {
    int id;
    char *name;
    char *surname;

} item;

void structs_example() {
    int x;

    student mehmet = {10, "Mehmet", "Yilmaz"};

    student ali = mehmet;

    student *students = (student *) malloc(sizeof(student) * 10);
    students[0] = mehmet;
    students[1] = ali;

    student *mehmet_ptr = &mehmet;
    mehmet.cgpa = 3.5f;


    printf("%f\n", mehmet.cgpa); // 3.5
    printf("%f\n", students->cgpa); // 0, struct lar static olarak tutulur.

    printf("%f", mehmet_ptr->cgpa); // printf("%f", (*mehmet_ptr).cgpa);


}