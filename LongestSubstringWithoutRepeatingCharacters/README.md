# [Longest Substring Without Repeating Characters](https://www.codingninjas.com/codestudio/problems/longest-substring-without-repeating-characters_8230684?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a string input of length n, find the length of the longest substring without repeating characters.

### Input_output
Input: abcabcbb  </br>
Output: 3

## Algorithm
- Initialize variable start =0, end=0 and maxLen=0 where start and end are used for maintaining sliding window, maxLen is the maximum length of the sliding window.
- Use set to store unique characters
- Repeat the following steps until the end<length(input)
    - check if the current character not present in the set, if true add it to set, update the maxLen and increment the end.
    - if false, remove the character at start from set and increment the start.
- return the maxLen

Time Complexity: O(n)</br>
Space Complexity: O(n)
