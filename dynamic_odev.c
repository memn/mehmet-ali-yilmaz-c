//
// Created by Mehmet Mumcu on 29.01.2019.
//

#include "dynamic_odev.h"

#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int *total_number_of_books; // holding book count in shelf.

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int **total_number_of_pages;

int odev_main() {
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    total_number_of_books = (int *) malloc(sizeof(int) * total_number_of_shelves);
    for (int j = 0; j < total_number_of_shelves; ++j) {
        total_number_of_books[j] = 0;
    }
    total_number_of_pages = (int **) malloc(sizeof(int *) * total_number_of_shelves);

    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             * 1 x y : Insert a book with y pages at the end of the xth shelf.
             * 2 x y : Print the number of pages in the yth book on the xth shelf.
             * 3 x : Print the number of books on the  shelf.
             */
            int x, y;
            scanf("%d %d", &x, &y);
            (*(total_number_of_books + x))++; // total_number_of_books[x]++;

            int *eski_raf = total_number_of_pages[x];
            total_number_of_pages[x] = (int *) malloc(sizeof(int) * total_number_of_books[x]);
            for (int i = 0; i < total_number_of_books[x] - 1; ++i) {
                total_number_of_pages[x][i] = eski_raf[i];
            }
            total_number_of_pages[x][total_number_of_books[x] - 1] = y;

        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }

    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }

    if (total_number_of_pages) {
        free(total_number_of_pages);
    }

    return 0;
}