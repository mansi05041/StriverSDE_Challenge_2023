# [Subset Sum-II](https://www.codingninjas.com/codestudio/problems/subsets-ii_8230855?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of N integers. You have to find the all unique subsets.

### Input_output
Input: arr = [1 1 3] </br>
Output: [ [] [1] [1 1] [1 3] [3] [1 1 3]]

## Algorithm

### Brute Force
- sort the input vector in non-decreasing order to handle duplicates
- Initialize an empty vector 'Subset' to store the unique subsets.
- Call the recursive function that give the unique subsets
    - base case: if idx(current index) reaches n(size of input array), add the currentSubset to the subset.
    - pick the element at the index idx by pushing it into currentSubset. Recursively call the function with idx+1.
    - After the recursive call, remove the last element from 'currentSubset' to backtrack.
    - Not pick the element at index idx. Recursively call the function with idx+1.
- sort the subset vector to group duplicates together.
- Remove consecutive duplicates.
- Return the subset.

Time Complexity : O(2<sup>n</sup>) </br>
Space Complexity : O(2<sup>n</sup>)

### better approach
- Sort the input vector 'arr' in non-decreasing order to handle duplicates.
- Initialize an empty vector 'Subset' to store the unique subsets.
- Call the recursive function :
    - add the currentSubset to the subset
    - iterate from idx to n-1
        - check if the current index is not equal to idx  (to skip duplicates) and arr[i]==arr[i-1], continue to the next iteration.
        - add the current element to currentSubset
        - recursively call the function with i+1.
        - remove the last element from the currentSubset to backtrack.
- return the resulting Subset

Time Complexity : O(2<sup>n</sup>)</br>
Space Complexity : O(n+2<sup>n</sup>)
