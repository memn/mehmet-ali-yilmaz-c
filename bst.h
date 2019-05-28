//
// Created by Mehmet Mumcu on 28.05.2019.
//

#ifndef MEHMET_ALI_YILMAZ_C_BST_H
#define MEHMET_ALI_YILMAZ_C_BST_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

enum Order {
    IN, PRE, POST
};

typedef int BType;

typedef struct BTree {
    BType data;
    struct BTree *left;
    struct BTree *right;
} BTree;

BTree *createBST(BType);

void addBST(BTree *, BType);

bool isEmptyBST(BTree *);

void printBST(BTree *root, enum Order order);

bool search(BTree *, BType);

BType max(BTree *);

BType min(BTree *);

#endif //MEHMET_ALI_YILMAZ_C_BST_H
