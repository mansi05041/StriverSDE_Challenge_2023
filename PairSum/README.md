# [Pair Sum](https://www.codingninjas.com/codestudio/problems/pair-sum_8230699?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an integer array 'arr' and size 'n' and an integer 's'. The task is to return the list of all pairs of elements such that each sum of elements of each pair equals S.

### Input_output
Input: arr=[1 2 3 4 5], s=5 </br>
Output: [[1 4] [2 3]]

## Algorithm
- Intialize an empty unordered map called hash to store the value and frequency of each element in arr.
- Intialize an empty 2D vector called 'result' to store the pairs of numbers whose sum is 's'.
- Iterate over each element in arr using a for loop
    - check if hash[s-arr[i]] exists, if exists then retrive the value of hash[s-arr[i]] and store to val.
    - create a temporary vector called temp
    - append 'val' pairs to temp.
    - append temp to result.
- Increment the value of hash[arr[i]] by 1 to keep the track of the count of each element.
- sort the result in ascending order.
- return the result.

Time Complexity : O(n+mlogm)</br>
Space Complexity : O(n+m)
