# Problem: Binary Search (Easy)

Link: https://leetcode.com/problems/binary-search/

## Approach

I used the binary search technique on the sorted array by repeatedly checking the middle element. The search range is reduced by half depending on whether the target is smaller or larger than the middle element.

## Complexity

Time: O(log n)
Space: O(1)

## Notes

Tested the program with two test cases. The first finds the target at index 3 and the second checks a target that is not present.
