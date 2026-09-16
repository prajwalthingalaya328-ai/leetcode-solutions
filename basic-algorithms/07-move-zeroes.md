# Problem: Move Zeroes (Easy)

Link: https://leetcode.com/problems/move-zeroes/

## Approach

I first move all non-zero elements to the beginning of the array while maintaining their original order. Then I fill the remaining positions with zeroes.

## Complexity

Time: O(n)
Space: O(1)

## Notes

Tested the program with two test cases. The first moves zeroes to the end while keeping the non-zero elements in order, and the second checks an array containing only zeroes.
