//
// Created by Mehmet Mumcu on 28.05.2019.
//

#include <assert.h>
#include "bst.h"

BTree *createBST(BType data) {
    BTree *node = (BTree *) malloc(sizeof(BTree));
    node->left = NULL;
    node->right = NULL;
    node->data = data;
    return node;
}

void addBST(BTree *root, BType insertion_data) {
    assert(!isEmptyBST(root));

    for (BTree *target = root;;) {
        if (target->data < insertion_data) {
            if (target->right == NULL) {
                target->right = createBST(insertion_data);
                break;
            }
            target = target->right;
        } else {
            if (target->left == NULL) {
                target->left = createBST(insertion_data);
                break;
            }
            target = target->left;
        }
    }
}

bool isEmptyBST(BTree *root) {
    return root == NULL;
}

void inorder(BTree *root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    printf("%d, ", root->data);
    inorder(root->right);
}

void preorder(BTree *root) {
    if (root == NULL) {
        return;
    }
    printf("%d, ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(BTree *root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d, ", root->data);
}

void printBST(BTree *root, enum Order order) {
    // in order
    // pre order
    // post order
    switch (order) {
        case IN:
            inorder(root);
            break;
        case PRE:
            preorder(root);
            break;
        case POST:
            postorder(root);
            break;
    }
    printf("\n");
}

bool search(BTree *root, BType searching) {
    if (isEmptyBST(root)) return false;
    if (root->data == searching) return true;
    else if (root->data > searching) return search(root->left, searching);
    else if (root->data < searching) return search(root->right, searching);
}