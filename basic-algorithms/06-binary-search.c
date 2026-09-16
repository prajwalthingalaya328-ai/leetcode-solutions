#include <stdio.h>

int main() {
    int nums[] = {1, 3, 5, 7, 9, 11};
    int n = 6;
    int target = 7;

    // Test Case 1
    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            break;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("Test Case 1: %d\n", result);

    // Test Case 2 - Edge Case
    int target2 = 2;

    left = 0;
    right = n - 1;
    result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target2) {
            result = mid;
            break;
        } else if (nums[mid] < target2) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("Test Case 2: %d\n", result);

    return 0;
}