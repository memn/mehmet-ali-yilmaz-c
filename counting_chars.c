#include <stdio.h>
#include <string.h>

int index_of_max(const int arr[], int length);

int counting_chars_test() {

    char sent[1000];
    scanf("%[^\n]", sent); // gets(sent);
    int counts[26] = {0};
    for (int i = 0; i < strlen(sent); i++) {
//  array e hangi harften kaç tane olduğunu bulup yazıcam.
        counts[sent[i] - 97]++;
    }
    int most = index_of_max(counts, 26);
    printf("%c\n", most + 97);
    for (int j = 0; j < 27; ++j) {
        printf("%d\n", counts[j]);

    }

    return 0;
}

int index_of_max(const int arr[], int length) {
    int max_index = 0;
    for (int i = 1; i < length; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    return max_index;

}
