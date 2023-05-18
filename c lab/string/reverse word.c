#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100], word[100];
    int length, i, j, k = 0;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    // Reverse the individual words
    for (i = 0; i < length; i++) {
        if (str[i] != ' ') {
            word[k++] = str[i];
        } else {
            // Reverse the word and add it to the reversed string
            for (j = k - 1; j >= 0; j--) {
                reversed[length - k] = word[j];
                length++;
            }
            reversed[length - k] = ' ';
            k = 0;
        }
    }

    // Reverse the last word and add it to the reversed string
    for (j = k - 1; j >= 0; j--) {
        reversed[length - k] = word[j];
        length++;
    }
    reversed[length - k] = '\0';

    printf("Reversed string: %s\n", reversed);

    return 0;
}
