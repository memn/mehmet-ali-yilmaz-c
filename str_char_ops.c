#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *replace_char(char *string, char old, char new);

void replace_inplace(char *str, // The given string
                     char c1, char c2) { // The characters
    int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == c1)
            str[i] = c2;
}


// change lower case chars to upper
// change upper cases to lower.
char *toggle_char_case(char *string) {
    for (int i = 0; i < strlen(string); ++i) {
        if (isupper(string[i])){
            string[i] += 32;
        } else if (islower(string[i])){
            string[i] -= 32;
        }
    }
}


int char_ops_test() {
    // toggle char case:
    char *sent;
// Get the sentence and the characters
    printf("Enter a sentence: ");
    scanf("%[^\n]", sent); // gets(sent);
    toggle_char_case(sent);
    printf("\nThe new sentence: %s\n", sent);
    return 0;
}

int replace_in_place_test() {
    char *sent;
    char ch1, ch2;
// Get the sentence and the characters
    printf("Enter a sentence: ");
    scanf("%[^\n]", sent); // gets(sent);
    printf("Enter the character to replace: ");
    scanf(" %c", &ch1);
    printf("Replace with: ");
    scanf(" %c", &ch2);
// Make replacements and display the new sentence
    replace_inplace(sent, ch1, ch2);
    printf("\nThe new sentence: %s\n", sent);
    return 0;
}


int replace_test() {
    char *string1 = "sadasfasjklad";
    char *replaced = replace_char(string1, 'a', 't');
    printf("%s", replaced);
    return 0;
}

char *replace_char(char *string, char old, char new) {
    char *copy = malloc(strlen(string) + 1);
    strcpy(copy, string);
    for (int i = 0; i < strlen(string); ++i) {
        if (copy[i] == old) {
            copy[i] = new;
        }
    }
    return copy;
}