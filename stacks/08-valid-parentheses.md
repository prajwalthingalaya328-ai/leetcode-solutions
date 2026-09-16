# Problem: Valid Parentheses (Easy)

Link: https://leetcode.com/problems/valid-parentheses/

## Approach

I used a stack to store opening brackets. Whenever a closing bracket is found, it is matched with the most recent opening bracket, and the string is valid only when all brackets are correctly matched.

## Complexity

Time: O(n)
Space: O(n)

## Notes

Tested the program with two test cases. The first contains correctly matched brackets and the second contains mismatched brackets.
