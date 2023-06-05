# [Sort 0 1 2](https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an integer array of size N. It only contains 0s, 1s and 2s. Write a solution to sort this array.

### Input_output
Input: arr = [0 1 2 2 1 0] </br>
Output: after sorting [0 0 1 1 2 2]

## Algorithm

### Brute Force
- Count the total number of 0s, 1s and 2s.
- Then fill the array according to the occurrence of elements.

Time Complexity : O(n) </br>
Space Complexity : O(1)

### better approach
- Intialize three pointers:
    - zero_ptr points to the rightmost boundary of the 0s section.
    - one_ptr points to the current element being processed.
    - two_ptr points to the leftmost boundary of the 2s section.
- Iterate while one_pte is less than or equal to two_ptr:
    - if arr[one_ptr]==0 , then swap(arr[one_ptr],arr[zero_ptr]) and increment one_ptr and zero_ptr by 1.
    - else if arr[one_ptr]==2 , then swap(arr[one_ptr],arr[two_ptr]) and decrement by 1.
    - else increment the one_ptr by 1.
- After the loop ends, the array will be sorted in place.

Time Complexity : O(n)</br>
Space Complexity : O(1)

<code>n: matrix row size </br>
m: matrix column size </code>