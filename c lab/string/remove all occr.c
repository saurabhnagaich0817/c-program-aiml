#include <stdio.h>
#include <string.h>

int main() {
    char str[100], target;
    int i, j;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to remove: ");
    scanf("%c", &target);

    int length = strlen(str);

    for (i = j = 0; i < length; i++) {
        if (str[i] != target) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String after removing all occurrences of '%c': %s\n", target, str);

    return 0;
}
