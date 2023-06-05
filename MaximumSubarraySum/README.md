# [Maximum Subarray Sum](https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_8230694?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of length N, consisting of integers. Find the sum of the subarray including empty subarray having maximum sum among all subarrays.

### Input_output
Input: [1 2 7 -4 3 2 -10 9 1] </br>
Output: 11

## Algorithm

### Naive Approach
- In nested loop find the sum of every subarray and update the maxSum accordingly.

```
function maxSubarraySum(arr, n):
    maxSum = -Infinity

    for i = 0 to n-1:
        curSum = 0
        
        for j = i to n-1:
            curSum = curSum + arr[j]
            
            if curSum > maxSum:
                maxSum = curSum
                
    return maxSum

```

Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(1)

### Kadane's algorithm
- Initialize two variables: 'curSum' and 'maxSum' to keep the track of the current and maximum sum respecively. Set 'curSum' to 0 and 'maxSum' to the smallest possible integer value (INT_MIN).
- Iterate over the input array from left to right.
- For each element in array (arr[i])
    - Add arr[i] to the 'curSum' to extend the current subarray sum.
    - If 'curSum' becomes less than or equal to 0, reset curSum to 0. This steps handles the case when the current subarray sum is negative, indicating that including the current element in the subarray will not yield a maximum sum.
    - update maxSum.
- return maxSum that holds the maximum subarray sum.

Time Complexity: O(n)</br>
Space Complexity: O(1)
