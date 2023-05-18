#include <stdio.h>

#include <string.h>

int main() {

    char str[100], word[20], *position;

    int count = 0;

    printf("Enter a string: ");

    gets(str);

    printf("Enter a word to count: ");

    gets(word);

    position = strstr(str, word);

    while (position != NULL) {

        count++;

        position = strstr(position + 1, word);

    }

    printf("Occurrences of '%s' in the string: %d\n", word, count);

    return 0;

}
