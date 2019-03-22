#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle {
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;

double area(triangle t) {
//    p*(p-a)*(p-b)*(p-c)^1/2
    double p = (t.a + t.b + t.c) / 2.0;
    return sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
}

int find_min_index(triangle *triangles, int n, int current) {
    int min_index = current;
    double min_value = area(triangles[current]);

    for (int i = current; i < n; ++i) {
        double look_value = area(triangles[i]);
        if (look_value < min_value) {
            min_index = i;
            min_value = look_value;
        }
    }
    return min_index;
}

void swapper(triangle *triangles, int current, int min) {
    if (current == min)
        return;

//    temp=current
//    current = min
//    min = temp

    triangle temp = {triangles[current].a, triangles[current].b, triangles[current].c};
    triangles[current].a = triangles[min].a;
    triangles[current].b = triangles[min].b;
    triangles[current].c = triangles[min].c;
    triangles[min].a = temp.a;
    triangles[min].b = temp.b;
    triangles[min].c = temp.c;

}

// uses selection sort
void sort_by_area(triangle *tr, int n) {
    for (int current = 0; current < n; ++current) {
        // find min
        int min_index = find_min_index(tr, n, current);
        // swap with first
        swapper(tr, current, min_index);
    }
}
