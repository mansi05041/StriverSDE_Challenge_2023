# [Next Permutation](https://www.codingninjas.com/codestudio/problems/next-permutation_8230741?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a permutation of 'N' integers. A sequence of 'N' integers is called a permutation if it contains all integers from 1 to N exactly once. Task is to rearrange the numbers and generate the lexicographically next Greater permutation.

### Input_output
Input: [2 3 1 4 5] </br>
Output: [2 3 1 5 4]

## Algorithm
- base case: if the size of permutation is equal to 0 or 1, return the input array as it is.
- find the mountain element from the right , iterating from n-2 to 0, check if the current element is smaller than its right neighbor. if so, then break the iteration.
- if the mountain element is not found then the permutation is itself the greatest, then sort the permutation in ascending order.
- else perform the following operations:
    - find the element which is greater than mountain element from right.
    - swap the both elements.
    - reverse the array from the next of mountain element's index to end of array.
- return the modified array

Time Complexity : O(n)</br>
Space Complexity : O(1)
