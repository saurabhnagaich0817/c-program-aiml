#include <stdio.h>

#include <string.h>

int main() {

    char str[100], word[20], *position;

    printf("Enter a string: ");

    gets(str);

    printf("Enter a word to search: ");

    gets(word);

    printf("Occurrences of '%s' in the string: ", word);

    position = strstr(str, word);

    while (position != NULL) {

        int index = position - str;

        printf("%d ", index);

        position = strstr(position + 1, word);

    }

    printf("\n");

    return 0;

}
