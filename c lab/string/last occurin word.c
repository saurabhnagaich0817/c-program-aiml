#include <stdio.h>

#include <string.h>

int main() {

    char str[100], word[20], *position, *lastPosition = NULL;

    printf("Enter a string: ");

    gets(str);

    printf("Enter a word to search: ");

    gets(word);

    position = strstr(str, word);

    while (position != NULL) {

        lastPosition = position;

        position = strstr(position + 1, word);

    }

    if (lastPosition != NULL) {

        int index = lastPosition - str;

        printf("Last occurrence of '%s' found at index: %d\n", word, index);

    } else {

        printf("Word '%s' not found in the string\n", word);

    }

    return 0;

}
