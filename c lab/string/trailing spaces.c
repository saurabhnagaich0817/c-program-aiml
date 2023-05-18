#include <stdio.h>

#include <string.h>

int main() {

    char str[100];

    int length;

    printf("Enter a string: ");

    gets(str);

    length = strlen(str);

    while (length > 0 && (str[length - 1] == ' ' || str[length - 1] == '\t')) {

        str[length - 1] = '\0';

        length--;

    }

    printf("String after trimming trailing white space characters: %s\n", str);

    return 0;

}
