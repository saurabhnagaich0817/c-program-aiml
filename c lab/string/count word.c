#include <stdio.h>

int main() {
    char str[100];
    int words = 0, i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            words++;
        }
        i++;
    }

    // Adding 1 for the last word
    words++;

    printf("Total words: %d\n", words);

    return 0;
}
