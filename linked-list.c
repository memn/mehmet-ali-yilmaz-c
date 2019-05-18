//
// Created by Mehmet Mumcu on 18.05.2019.
//

#include <stdlib.h>
#include <stdio.h>
#include "linked-list.h"

node_t *last(node_t *head) {
    // start from head
    // go until next is null
    // when next is null
    // it is last element
    if (isEmptyL(head)) {
        return NULL;
    }
    node_t *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    return temp;
}

node_t *add_beginning(node_t *head, student_t student) {
    node_t *new = (node_t *) malloc(sizeof(node_t));
    new->data = student;
    new->next = head;
    return new;
}

node_t *add(node_t *head, student_t student) {
    // yeni kutu olustur
    // en sona git
    // en sonuncuya yeni kutuyu bagla
    node_t *new = (node_t *) malloc(sizeof(node_t));
    new->data = student;
    new->next = NULL;
    if (isEmptyL(head)) {
        return add_beginning(head, student);
    }
    node_t *last_element = last(head);
    last_element->next = new;
    return head;
}

node_t *get(node_t *head, int index) {
    // index 0 ila size arasindadir.
    // degilse hata donersin.
    node_t *temp = head;
    int count = 0;
    while (temp->next != NULL) {
        temp = temp->next;
        count++;
        if (count == index) {
            break;
        }
    }
    return temp;
}

// liste bossa
// index eger 0 dan kucukse basa ekle demektir
// eger toplam uzunluktan buyukse veya esıtse sona ekle demektir.
node_t *insert(node_t *head, student_t student, int index) {
    if (isEmptyL(head) || index < 0) {
        return add_beginning(head, student);
    } else if (index > sizeL(head)) {
        return add(head, student);
    }
    node_t *new = (node_t *) malloc(sizeof(node_t));
    new->data = student;
    // koyacagimiz yeri bul.
    node_t *at = get(head, index);
    // index-1 ' in nextini new e eşitleyeceğiz.
    // new in nesxt i ni de index+1 e eşitleyeceğiz.
    new->next = at->next;
    at->next = new;
}


// index in 0 olmasi
// index size -1 e esit olmasi
//
node_t *delete(node_t *head, int index) {
    node_t *before;
    if (index == 0) {
        node_t *next = head->next;
        free(head);
        return next;
    }

    if (index >= sizeL(head)) {
        return head;
    }

    before = get(head, index - 1);

    // index-1 i bul
    // index-1 in next ini indexin  nextine eşitle
    // free index
    node_t *at_index = before->next;
    before->next = at_index->next;
    free(at_index);
    return head;
}

void print_studentL(student_t student) {
    printf("%d - %s - %f", student.id, student.name, student.grade);
}

void printL(node_t *head) {
    if (isEmptyL(head)) {
        printf("List is empty.\n");
    }
    for (node_t *temp = head; temp != NULL; temp = temp->next) {
        print_studentL(temp->data);
        printf("\n");
    }
}

bool isEmptyL(node_t *head) {
    return head == NULL;
}

int sizeL(node_t *head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}
