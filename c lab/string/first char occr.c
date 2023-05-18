#include <stdio.h>

int main() {
    char str[100], target;
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to search: ");
    scanf("%c", &target);

    while (str[i] != '\0') {
        if (str[i] == target) {
            printf("First occurrence found at index %d\n", i);
            break;
        }
        i++;
    }

    if (str[i] == '\0') {
        printf("Character not found in the string.\n");
    }

    return 0;
}
