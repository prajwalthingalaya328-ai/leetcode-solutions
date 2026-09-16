#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";

    printf("Test Case 1: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    char str2[] = "a";

    printf("Test Case 2: ");
    for (int i = strlen(str2) - 1; i >= 0; i--) {
        printf("%c", str2[i]);
    }
    printf("\n");

    return 0;
}