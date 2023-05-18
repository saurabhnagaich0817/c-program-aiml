#include <stdio.h>

int main() {
    char str[100], reverse[100];
    int length = 0, i, j;

    printf("Enter a string: ");
    gets(str);

    // Calculating the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Reversing the string
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reverse[j] = str[i];
    }
    reverse[j] = '\0';

    printf("Reversed string: %s\n", reverse);

    return 0;
}
