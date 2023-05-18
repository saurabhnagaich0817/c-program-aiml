#include <stdio.h>

int main() {
    char str[100], target;
    int i = 0, lastIndex = -1;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to search: ");
    scanf("%c", &target);

    while (str[i] != '\0') {
        if (str[i] == target) {
            lastIndex = i;
        }
        i++;
    }

    if (lastIndex != -1) {
        printf("Last occurrence found at index %d\n", lastIndex);
    } else {
        printf("Character not found in the string.\n");
    }

    return 0;
}
