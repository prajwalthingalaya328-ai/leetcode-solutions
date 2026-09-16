# Problem: Valid Anagram (Easy)

Link: https://leetcode.com/problems/valid-anagram/

## Approach

I used a frequency array of size 26 to count the occurrences of each character. The counts are increased for the first string and decreased for the second string; if all counts become zero, the strings are anagrams.

## Complexity

Time: O(n)
Space: O(1)

## Notes

Tested the program with two test cases. The first is an anagram and the second is a non-anagram case.
