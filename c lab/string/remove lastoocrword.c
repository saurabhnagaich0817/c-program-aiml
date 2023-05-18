#include <stdio.h>

#include <string.h>

int main() {

    char str[100], word[20], *position, *lastPosition;

    int length, wordLength, i, j;

    printf("Enter a string: ");

    gets(str);

    printf("Enter a word to remove: ");

    gets(word);

    position = strstr(str, word);

    lastPosition = NULL;

    while (position != NULL) {

        lastPosition = position;

        position = strstr(position + 1, word);

    }

    if (lastPosition != NULL) {

        length = strlen(str);

        wordLength = strlen(word);

        int startIndex = lastPosition - str;

        for (i = startIndex; i < length - wordLength; i++) {

            str[i] = str[i + wordLength];

        }

        str[length - wordLength] = '\0';

        printf("String after removing last occurrence of '%s': %s\n", word, str);

    } else {

        printf("Word '%s' not found in the string\n", word);

    }

    return 0;

}
