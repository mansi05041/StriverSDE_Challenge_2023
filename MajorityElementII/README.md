# [Majority Element-II](https://www.codingninjas.com/codestudio/problems/majority-element-ii_8230738?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of length N, consisting of integers. Find all the elements that occur strictly more than floor(N/3) times in the given array list.

### Input_output
Input: [2 3 9 2 2] </br>
Output: 2

## Algorithm

- Using a hash map store the elements of array with the frequency. 
- Initialize a result vector to store the all elements that are greater than floor(N/3).
- Iterate through the hash map, on encountering the required element push it into result vector.
- return result.

Time Complexity: O(n)</br>
Space Complexity: O(n)
