#include <stdio.h>

int main() {
    char str[100], target;
    int i = 0, count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to count: ");
    scanf("%c", &target);

    while (str[i] != '\0') {
        if (str[i] == target) {
            count++;
        }
        i++;
    }

    printf("Occurrences of '%c' in the string: %d\n", target, count);

    return 0;
}
