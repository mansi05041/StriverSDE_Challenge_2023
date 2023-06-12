# [Remove Duplicates from Sorted Array](https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-sorted-array_8230811?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a sorted integer array of size N, Need to remove the duplicates from the array such that elements appears only once. Return the length of new array.

### Input_output
Input: arr=[1,1,2] </br>
Output: 2, arr=[1,2,_]

## Algorithm
- Initialize <code>i=0</code>, which will keep track of the index where the next element will be placed.
- Iterate through the array using a variable "j" from index 1 to n-1.
    - check id the element at index j is different from the element at index i.
    - if they are different, it means we have found a new unique element.
    - increment i by 1 and update the element at index i with the element at index j.
- return i+1, which represents the length of the array after removing duplicates.

Time Complexity : O(n)</br>
Space Complexity : O(1)
