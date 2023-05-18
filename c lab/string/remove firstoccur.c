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

    for (i = 0; i < length; i++) {
        if (str[i] == target) {
            for (j = i; j < length - 1; j++) {
                str[j] = str[j + 1];
            }
            str[length - 1] = '\0';
            break;
        }
    }

    printf("String after removing first occurrence of '%c': %s\n", target, str);

    return 0;
}
