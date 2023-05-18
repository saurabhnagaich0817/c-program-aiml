#include <stdio.h>

int main() {
    char str[100], target;
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to search: ");
    scanf("%c", &target);

    printf("Occurrences found at indexes: ");
    while (str[i] != '\0') {
        if (str[i] == target) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    return 0;
}
