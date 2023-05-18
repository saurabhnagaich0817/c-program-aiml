#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[20], *position;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a word to search: ");
    gets(word);

    position = strstr(str, word);

    if (position != NULL) {
        int index = position - str;
        printf("First occurrence of '%s' found at index: %d\n", word, index);
    } else {
        printf("Word '%s' not found in the string\n", word);
    }

    return 0;
}
