#include <stdio.h>

char *curiousExamples();

void print_words_char_counts(char *line_ptr);

int main_string_ops() {
//    Example: Write a program to count the characters and the words in the input until a newline
//    character is entered.
    char line[100];
    char *line_ptr;
    printf("Type in a line of data:\n");
    line_ptr = gets(line);
    print_words_char_counts(line_ptr);
    return 0;
}

void print_words_char_counts(char *line) {
    //bn e kadar kaç tane char olduğunu bulacağız.
    int i = 0;
    int char_count = 0;
    int word_count = 0;
    while (line[i] != '\0') {
        char_count++;
        if (line[i] == ' ') {
            word_count++;
        }
        i++;

    }
    printf("%d\n ", char_count);
    printf("%d ", word_count);


}

char *curiousExamples() {
    char name1[5] = "Esin";
    printf("%s\n", name1);
    char name2[5] = {'D', 'e', 'n', 'i', 'z'};
    printf("%s\n", name2);
    printf("%s\n", name1 + 2);
    char str[50];
    char str2[50];
    printf("Enter a string (finish with a question mark): ");
    scanf("%[^?]%s", str, str2);
    printf("%s\n", str);
    printf("%s\n", str2);

}