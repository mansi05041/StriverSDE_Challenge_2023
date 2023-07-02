# [Check Permutation](https://www.codingninjas.com/studio/problems/check-permutation_8230834?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two strings 'str1' and 'str2'. You have to check whether the two strings are anagram to each other or not.

### Input_output
Input: str1 = "listen" , str2 = "silent" </br>
Output: true

## Algorithm
- Check if the length of both strings are not equal then return false.
- Initialize an unordered map
- add the all characters of str1 and str2 into map.
- iterate in map and check if the frequency of any character is not odd, if so then return false.
- return true, indicating they are anagram to each other.

Time Complexity: O(n)</br>
Space Complexity: O(n)
