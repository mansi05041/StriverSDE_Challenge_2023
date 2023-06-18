# [Palindrome Partitioning](https://www.codingninjas.com/codestudio/problems/palindrome-partitioning_8230726?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a string 's'. Your task is to partition 's' such that every substring of the partition is a palindrome. You need to return all possible palindrome partitioning of 's'.

### Input_output
Input: "BaaB" </br>
Output: [ [B,a,a,B] [B,aa,B] [Baab] ]

## Algorithm
- call the recursive function that takes intial index 0, result vector, input string and an empty temp vector.
- In recursive function:
    - base case : if the index is equal to the size of string, then add the current partition to the result vector.
    - Iterate from the current index to the end of the string.
    - check if the substring from the current index to the current iteration index is a palindrome then
        - add it to temp vector
        - recursively call the function itself with index+1
        - remove the last added substring from the temp to explore other possiblities.
- return the result vector

Time Complexity : O(n*2<sup>n</sup>)</br>
Space Complexity : O(n*2<sup>n</sup>)
