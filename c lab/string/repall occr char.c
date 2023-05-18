#include <stdio.h>
#include <string.h>

int main() {
    char str[100], target, replacement;
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to replace: ");
    scanf("%c", &target);

    printf("Enter a replacement character: ");
    scanf(" %c", &replacement); // Notice the space before %c to consume the newline character

    int length = strlen(str);

    for (i = 0; i < length; i++) {
        if (str[i] == target) {
            str[i] = replacement;
        }
    }

    printf("String after replacing all occurrences of '%c' with '%c': %s\n", target, replacement, str);

    return 0;
}
