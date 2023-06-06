# [Missing and repeating numbers](https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_8230733?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given an array of size 'N'. The elements of the array are in the range from 1 to N. Ideally the array should contain elements from 1 to N. But due to some miscalculations, there is a number R in the range [1,N] which appears in the array twice and another number M in the range[1,N] which is missing from the array.
Task is to find the missing number(M) and the repeating number(R)

### Input_output
Input: [6,4,3,5,5,1] </br>
Output: [2,5]

## Algorithm
- Intialize a pair 'res' to store the missinf and repeating elements.
- Iterate through the array 'arr' from index 0 to n-1.
- For each index i, check if the element at arr[i] is not equal to the element at arr[arr[i]-1], if so then swap both elements. This step is performed to place each element in its correct position in the array.
- otherwise increment i.
- After the loop, iterate through the array again.
- For each index i, check if arr[i] is not equal to i+1. if true, store the missing element as i+1 and repeating element as arr[i]
- return the pair 'res'

Time Complexity: O(n)</br>
Space Complexity: O(1)

