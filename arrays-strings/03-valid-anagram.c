#include <stdio.h>

int main() {
    char s[] = "anagram";
    char t[] = "nagaram";

    int count[26] = {0};

    // Test Case 1
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    int valid = 1;

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            valid = 0;
            break;
        }
    }

    printf("Test Case 1: %s\n", valid ? "true" : "false");

    // Test Case 2 - Edge Case
    char s2[] = "rat";
    char t2[] = "car";

    int count2[26] = {0};

    for (int i = 0; s2[i] != '\0'; i++) {
        count2[s2[i] - 'a']++;
    }

    for (int i = 0; t2[i] != '\0'; i++) {
        count2[t2[i] - 'a']--;
    }

    valid = 1;

    for (int i = 0; i < 26; i++) {
        if (count2[i] != 0) {
            valid = 0;
            break;
        }
    }

    printf("Test Case 2: %s\n", valid ? "true" : "false");

    return 0;
}