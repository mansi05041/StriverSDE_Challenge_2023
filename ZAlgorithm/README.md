# [Z Algorithm](https://www.codingninjas.com/studio/problems/z-algorithm_8230818?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a string S of length N and a string P of length M. The task is to find the number of occurences of P in S in linear time.

### Input_output
Input: s = "ababa", p = "ab" </br>
Output: 2

## Algorithm
- Concatenate the pattern 'p' and the text 's' with a seperator character '$'
- intialize an array 'Z' of size of concat string with all elements set to 0.
- Fill the Z array.
- Count the occurences of the pattern 'p' by finding the indices 'i' in the 'Z' array where Z[i] is equal to the length of the pattern 'p'.

Time Complexity : O(n+m)</br>
Space Complexity : O(n+m)
