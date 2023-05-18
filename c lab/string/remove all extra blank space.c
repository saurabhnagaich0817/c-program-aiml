#include <stdio.h>

#include <string.h>

int main() {

    char str[100], result[100];

    int length, i, j;

    printf("Enter a string: ");

    gets(str);

    length = strlen(str);

    j = 0;

    for (i = 0; i < length; i++) {

        if (str[i] == ' ' && (str[i + 1] == ' ' || str[i + 1] == '\t')) {

            continue;

        }

        result[j++] = str[i];

    }

    result[j] = '\0';

    printf("String after removing extra blank spaces: %s\n", result);

    return 0;

}
