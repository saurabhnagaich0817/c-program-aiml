#include <stdio.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, special = 0, i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            special++;
        }
        i++;
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
