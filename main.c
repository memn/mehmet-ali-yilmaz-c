

#include "bst.h"

int main() {

    BTree *root = createBST(10);

    addBST(root, 3);
    addBST(root, 12);
    addBST(root, 32);
    addBST(root, 11);
    printBST(root, PRE);
    addBST(root, 21);
    addBST(root, 1);
    addBST(root, 5);
    addBST(root, 7);
    addBST(root, 9);
    addBST(root, 11);
    addBST(root, 13);
    addBST(root, 2131);
    printBST(root, IN);
    printBST(root, POST);

    printf("%d\n", search(root, 3));
    printf("%d\n", search(root, 11));
    printf("%d\n", search(root, 13));
    printf("%d\n", search(root, 2131));
    printf("%d\n", search(root, 21));
    printf("%d\n", search(root, 9));
    printf("\n");
    printf("%d\n", search(root, 90));
    printf("%d\n", search(root, 91));
    printf("%d\n", search(root, 123));

    return 0;
}
