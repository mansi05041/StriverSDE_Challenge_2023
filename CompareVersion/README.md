# [Compare Version](https://www.codingninjas.com/studio/problems/compare-version-numbers_8230793?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input-Output](#input-output)
- [Algorithm](#algorithm)

## Question
Given two versions number A and B as a string. Task is to compare them and find out which one of them is a newer version.

## Input-Output
Input: A = "1.23.45", B="1.23.456" </br>
Output: 1

## Algorithm
- Removes the trailing zeros after the decimal point for both strings.
- It initializes four pointers s1 and e1 to keep track of the start and end of the current component in string 'a' and s2 and e2 to do the same for string 'b'.
- It enters a loop that iterates untill the version numbers are completely compared or one version number is found to be greater than the other.
- Within the loop
    - It finds the next dot position 'e1' in string 'a' and 'e2' in string 'b', starting from the current positions 's1' and 's2'.
    - It then compares the substring between 's1' and 'e1' in string 'a' and between 's2' and 'e2' in string 'b', character by character.
    - if at any point the characters being compared differ, it returns 1 if character in 'a' is greater or -1 if the character in 'b' is greater.
    - If the characters being compared are the same, it moves on to the next component by updating the pointers 's1','e1','s2' and 'e2'.
    - If both strings have been compared completely and are identical so far, it returns 0.
    - If one string is shorter than other, it means the shorter one is a prefix of the longer one, and the shorter one is considered smaller.
    
Time Complexity: O(n) </br>
Space Complexity: O(1)