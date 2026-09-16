# Problem: Reverse a Linked List (Easy)

Link: https://leetcode.com/problems/reverse-linked-list/

## Approach

I used three pointers to reverse the linked list: previous, current, and next. Each node's next pointer is changed to point to the previous node until the entire list is reversed.

## Complexity

Time: O(n)
Space: O(1)

## Notes

Tested the program with two test cases. The first reverses a three-node linked list and the second checks a single-node edge case.
