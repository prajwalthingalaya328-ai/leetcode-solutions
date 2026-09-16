# Problem: Best Time to Buy and Sell Stock (Easy)

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

I keep track of the lowest stock price seen so far and calculate the possible profit for each day. Whenever a higher profit is found, I update the maximum profit.

## Complexity

Time: O(n)
Space: O(1)

## Notes

Tested the program with two test cases. The first gives a maximum profit of 5 and the second gives a profit of 0 because the prices keep decreasing.
