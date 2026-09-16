#include <stdio.h>
#include <string.h>

int main() {
    char *strs[] = {"flower", "flow", "flight"};
    int n = 3;

    // Test Case 1
    int length = strlen(strs[0]);

    for (int i = 1; i < n; i++) {
        int j = 0;

        while (j < length && strs[i][j] != '\0' &&
               strs[0][j] == strs[i][j]) {
            j++;
        }

        length = j;
    }

    printf("Test Case 1: ");

    if (length == 0) {
        printf("No common prefix");
    } else {
        for (int i = 0; i < length; i++) {
            printf("%c", strs[0][i]);
        }
    }

    printf("\n");

    // Test Case 2 - Edge Case
    char *strs2[] = {"dog", "racecar", "car"};
    int n2 = 3;

    length = strlen(strs2[0]);

    for (int i = 1; i < n2; i++) {
        int j = 0;

        while (j < length && strs2[i][j] != '\0' &&
               strs2[0][j] == strs2[i][j]) {
            j++;
        }

        length = j;
    }

    printf("Test Case 2: ");

    if (length == 0) {
        printf("No common prefix");
    } else {
        for (int i = 0; i < length; i++) {
            printf("%c", strs2[0][i]);
        }
    }

    printf("\n");

    return 0;
}