# [Maximum Consecutive Ones](https://www.codingninjas.com/codestudio/problems/maximum-consecutive-ones_8230736?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a binary array of size N. Task is to find the longest sequence of continous 1's that can be formed by replacing at most 'k' zeroes by ones. Return the length of this longest sequence of continuous 1's.

### Input_output
Input: [1 0 0 1 0 1 0 1 0 1], k = 2 </br>
Output: 5

## Algorithm
- Initialize count to 0, which represents the number of zeros encountered in the current subarray.
- Initialize i to 0, which represents the start index of the current subarray.
- Initialize ans = 0, which represents the length of the longest subarray found so far.
- Iterate j from 0 to n-1, repeat the following steps:
    - if arr[j]=0, increment the count by 1.
    - while count is greater than k, then check if arr[i]=0 then decrement the count. Increment i by 1.
    - update the ans.
- return ans

Time Complexity: O(n)</br>
Space Complexity: O(1)
