#include <stdio.h>
#define ASCII_SIZE 256

int main() {
    char str[100];
    int frequency[ASCII_SIZE] = {0};
    int i;

    printf("Enter a string: ");
    gets(str);

    // Calculate the frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        frequency[str[i]]++;
    }

    // Display the frequency of each character
    printf("Character frequencies:\n");
    for (i = 0; i < ASCII_SIZE; i++) {
        if (frequency[i] > 0) {
            printf("%c: %d\n", i, frequency[i]);
        }
    }

    return 0;
}
