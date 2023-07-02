# [Longest Palindrome Substring](https://www.codingninjas.com/studio/problems/day-12-longest-palindromic-substring_8230702?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a string of length 'n'. Task is to find the longest palindromic substring. If there is more than one palindromic substring with maximum length, return the one with the smaller start index.

### Input_output
Input: ababc </br>
Output: aba

## Algorithm

### Naive Approach
- Check the every substring that is palindrome.
- update max length of the palindrome substring found so far.
- return max length.

Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(1)

### Better approach
- Initialize start and maxLen variables to keep track of the starting index and length of the longest palindromic substring found.
- Before starting the main loop, a base case is checked: if the size of the input string is less than 1, an empty string is returned since there cannot be a palindromic substring in an empty string.
- The loop iterates over each character of the string using variable 'i' as the center of the potential palindromic substring. For each character, it calls the 'expandAroundCenter' function twice to check for palindromes of both odd and even lengths.
- The lengths of the palindromes found, len1 and len2 are compared and the maximum length is stored in the variable len.
- If the length 'len' is greater than the current maximum length 'maxLen', the starting index 'start' is updated as i-(len-1)/2 and the maximum length 'maxLen' is updated to len.
- after the loop finishes, the function return substring of str from start with length 'maxLen'.

Time Complexity: O(n<sup>2</sup>)</br>
Space Complexity: O(1)
