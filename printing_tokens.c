#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_tokens(char *s, char token);


int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    print_tokens(s, ' ');

    return 0;
}

void print_tokens(char *line, char token) {
    for (int i = 0; i < strlen(line); ++i) {
        if (line[i] != token) {
            printf("%c", line[i]);
        } else {
            printf("\n");
        }
    }
}