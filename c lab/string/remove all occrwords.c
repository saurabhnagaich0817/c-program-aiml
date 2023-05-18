#include <stdio.h>

#include <string.h>

int main() {

    char str[100], word[20], *position;

    int length, wordLength, i, j, count = 0;

    printf("Enter a string: ");

    gets(str);

    printf("Enter a word to remove: ");

    gets(word);

    length = strlen(str);

    wordLength = strlen(word);

    position = strstr(str, word);

    while (position != NULL) {

        count++;

        int startIndex = position - str;

        for (i = startIndex; i < length - wordLength; i++) {

            str[i] = str[i + wordLength];

        }

       
