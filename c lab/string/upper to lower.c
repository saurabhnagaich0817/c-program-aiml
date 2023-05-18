#include <stdio.h>

#include <ctype.h>

#include <string.h>

int main() {

    char str[100];

    printf("Enter a string in uppercase: ");

    gets(str);

    int length = strlen(str);

    int i;

    for (i = 0; i < length; i++) {

        str[i] = tolower(str[i]);

    }

    printf("String in lowercase: %s\n", str);

    return 0;

}
