#include <stdio.h>

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;

    // Test Case 1
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    printf("Test Case 1: %d\n", maxProfit);

    // Test Case 2 - Edge Case
    int prices2[] = {7, 6, 4, 3, 1};
    int n2 = 5;

    minPrice = prices2[0];
    maxProfit = 0;

    for (int i = 1; i < n2; i++) {
        if (prices2[i] < minPrice) {
            minPrice = prices2[i];
        }

        int profit = prices2[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    printf("Test Case 2: %d\n", maxProfit);

    return 0;
}