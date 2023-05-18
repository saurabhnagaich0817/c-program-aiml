#include <stdio.h>
#define ASCII_SIZE 256

int main() {
    char str[100];
    int frequency[ASCII_SIZE] = {0};
    int i, maxFrequency = 0;

    printf("Enter a string: ");
    gets(str);

    // Calculate the frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        frequency[str[i]]++;
        if (frequency[str[i]] > maxFrequency) {
            maxFrequency = frequency[str[i]];
        }
    }

    // Find the character(s) with the highest frequency
    printf("Highest frequency character(s): ");
    for (i = 0; i < ASCII_SIZE; i++) {
        if (frequency[i] == maxFrequency) {
            printf("%c ", i);
        }
    }
    printf("\n");

    return 0;
}
