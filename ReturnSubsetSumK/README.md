# [Return Subsets Sum to K](https://www.codingninjas.com/codestudio/problems/return-subsets-sum-to-k_8230706?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an integer array 'arr' of size 'n' and an integer 'K', return all the subsets of 'arr' which sum to 'K'.

### Input_output
Input: arr=[5 -1 8 2 7 0], k=7</br>
Output: [ [-1 8] [-1 8 0] [5 2] [5 2 0] [7] [7 0] ] 

## Algorithm
- Generate all the Subsets using recursive function.
- check if the obtained subsets yield the sum equal to k, then merge it into answer.
- return the answer.

Time Complexity : O(2<sup>n</sup>)</br>
Space Complexity : O(k)
