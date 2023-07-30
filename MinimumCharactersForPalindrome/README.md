# [Minimum Characters for Palindrome](https://www.codingninjas.com/studio/problems/minimum-characters-for-palindrome_8230737?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a string 'str' of length 'n'. The task is to return the count of minimum characters to be added at front to make the string a palindrome.

### Input_output
Input: str = "abcd" </br>
Output: 3

## Algorithm

### Brute Force
- Check all the possible substrings of the input string, starting from the begining and removing characters one by one from the end, and checking if the resuting string is a palindrome.
- If the above condition is true then break the loop, else continue the iteration with incrementing the count value.

Time Complexity: O(n<sup>2</sup>)</br>
Space Complexity: O(1)

### Optimized approach using lps array
- concatenate the original string with its reverse, seperated by a special character like '$', to create a new string 'str'.
- Compute the longest proper prefix that is also a proper suffix (lps) for each index in the new string 'str'
- The minimum number of characters needed to make 'str' a palindrome is the difference between the length of str and the value of the last element in the lps array.

Time Complexity: O(n)</br>
Space Complexity: O(n)