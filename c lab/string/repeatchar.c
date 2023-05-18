#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    gets(str);

    int length = strlen(str);

    for (i = 0; i < length; i++) {
        for (j = i + 1; j < length; ) {
            if (str[j] == str[i]) {
                for (k = j; k < length - 1; k++) {
                    str[k] = str[k + 1];
                }
                str[length - 1] = '\0';
                length--;
            } else {
                j++;
            }
        }
    }

    printf("String after removing repeated characters: %s\n", str);

    return 0;
}
