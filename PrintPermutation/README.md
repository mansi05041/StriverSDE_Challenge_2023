# [Print Permutation](https://www.codingninjas.com/codestudio/problems/day-13-print-permutations-string_8230703?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a string 's'. Your task is to find and return all possible permutations of the string.

### Input_output
Input: "cba" </br>
Output: [cba,cab,abc,abc,bac,bca]

## Algorithm
- call the recursive function:
    - base case: if idx(current index) equals to n(size of string) then add the current permutation to the result.
    - iterate from idx to n. for each iteration, the characters at position 'i'
        - swap(s[i],s[idx])
        - call the recursive function itself with idx+1
        - swap back to their original positions to backtrack and explore other permutation

Time Complexity : O(n!)</br>
Space Complexity : O(n*n!)
