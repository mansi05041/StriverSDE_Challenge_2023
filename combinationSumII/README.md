# [Combination Sum II](https://www.codingninjas.com/codestudio/problems/combination-sum-ii_8230820?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array arr of n positive integers. Also given a target. Your task is to find all unique combinations of the array arr whose sum is equal to the target. Each number in arr may only used once in the combination.

### Input_output
Input: [10 1 2 7 6 1 5], target = 8 </br>
Output: [ [1 1 6] [1 2 5] [1 7] [2 6] ]

## Algorithm
-S ort the input vector 'arr' in non-decreasing order to handle duplicates.
- Initialize an empty vector 'res' to store the subsets that results to target.
- Call the recursive function :
    - base case if target == 0 , add temp vector into result
    - iterate from idx to n-1
        - check if the current index is not equal to idx (to skip duplicates) and arr[i]==arr[i-1], continue to the next iteration.
        - add the current element to temp
        - recursively call the function with i+1.
        - remove the last element from the temp to backtrack.
- return the res

Time Complexity : O(2<sup>n</sup>) </br>
Space Complexity : O(n+2<sup>n</sup>)
