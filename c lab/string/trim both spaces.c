#include <stdio.h>

#include <string.h>

int main() {

    char str[100];

    int i, j, length;

    printf("Enter a string: ");

    gets(str);

    length = strlen(str);

    for (i = 0; i < length; i++) {

        if (str[i] != ' ' && str[i] != '\t') {

            break;

        }

    }

    for (j = 0; i < length; i++, j++) {

        str[j] = str[i];

    }

    str[j] = '\0';

    length = strlen(str);

    while (length > 0 && (str[length - 1] == ' ' || str[length - 1] == '\t')) {

        str[length - 1] = '\0';

        length--;

    }

    printf("String after trimming leading and trailing white space characters: %s\n", str);

    return 0;

}
