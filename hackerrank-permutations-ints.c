#include <stdio.h>
#include <stdlib.h>

int indexOfMinGreaterThan(int *s, int start, int end, int small) {
    int min_index = start;
    int min = s[start];
    for (int i = start + 1; i < end; ++i) {
        if (s[i] < min && small < s[i]) {
            min = s[i];
            min_index = i;
        }
    }
    return min_index;
}

int find_min_index2(int *s, int start, int end) {
    int min_index = start;
    int min = s[start];
    for (int i = start + 1; i < end; ++i) {
        if (s[i] < min) {
            min = s[i];
            min_index = i;
        }
    }
    return min_index;
}

void swapper2(int *s, int first, int second) {
    int temp = s[first];
    s[first] = s[second];
    s[second] = temp;
}

void sortrest(int *s, int start, int length) {

    for (int current = start; current < length; ++current) {
        // find min
        int min_index = find_min_index2(s, current, length);
        // swap with first
        swapper2(s, current, min_index);
    }
}

int next_permutation(int n, int *s) {
    /**
    * Complete this method
    * Return 0 when there is no next permutation and 1 otherwise
    * Modify array s to its next permutation
    */
    // tersten basla ilk sirali olan ikiliyi bul
    // siralida kucuk olandan bir buyugu baktiklarinda ara
    // bunlarin yerini degistir.
    // buldugun yerden sonrasini sirala
    // bitti
    // eger boyle bir yer bulamazsan baska permutasyon kalmamistir.


    for (int i = n - 1; i >= 0; i--) {
        if (i == 0) {
            // herhangi bir permutasyon kalmamis.
            return 0;
        }
        if (s[i] > s[i - 1]) {
            // i yi bulduk.
            // bul: en kucuk >= s[i-1] in [i, n-1]
            int nextMinIndex = indexOfMinGreaterThan(s, i, n, s[i - 1]);
            swapper2(s, i - 1, nextMinIndex);
            sortrest(s, i, n);
            return 1;
        }
    }
}

int permutations_test() {
    int *s;
    int n;
    scanf("%d", &n);
    s = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }
    do {
        for (int i = 0; i < n; i++)
            printf("%d%c", s[i], i == n - 1 ? '\n' : ' ');
    } while (next_permutation(n, s));
    return 0;
}