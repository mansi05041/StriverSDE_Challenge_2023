# [Subset Sum](https://www.codingninjas.com/codestudio/problems/subset-sum_8230859?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of N integers. You have to find the sum of all subsets in the non-decreasing order of the given array.

### Input_output
Input: arr = [1 2 3] </br>
Output: [0 1 2 3 3 4 5 6]

## Algorithm

### Brute Force
The brute force approach generates all possible subsets of the input vector using the power set concept and calculates their sums.
- Initialize an empty vector called subset.
- Get the size of input vector (n)
- Iterate from 0 to 2^n - 1(all the possible combinations):
    - For each iteration, create a new subset vector
    - For each bit position in the binary representation of the current iteration, if the bit is set (1), add the corresponding elements from input vector to the subset.
    - calculate the sum of elements in the subset and add it to Subset vector
- sort the Subset vector in ascending order.
- return the Subset vector.

Time Complexity : O(n*2<sup>n</sup>) </br>
Space Complexity : O(2<sup>n</sup>)

### recursive approach
- Initialize an empty vector called Subset
- call the recursive function with parameters input vector, index as 0, sum as 0, Subset, n (size of input vector).
- sort the Subset vector in ascending order
- Return the Subset. </br>
In Recursive Function
- Check the base case: if n == index , add the current sum to the subset vector and return.
- Pick the current element: Call the recursive function itself with index incremented by 1 and increased the sum by nums[index].
- Do not pick the current element: Call the recursive function itself with index incremented by 1 and the sum will be unchanged.

Time Complexity : O(2<sup>n</sup>)</br>
Space Complexity : O(n+2<sup>n</sup>)
