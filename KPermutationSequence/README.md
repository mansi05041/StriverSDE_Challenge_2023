# [K-th Permutation Sequence](https://www.codingninjas.com/codestudio/problems/k-th-permutation-sequence_8230822?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two integers 'n' and 'k'.Task is to find the Kth permutation sequence of numbers from 1 to n. The Kth permutation is th Kth permutation in the set of all sorted permutations of string 1 to N.

### Input_output
Input: n=3, k=4</br>
Output: 231

## Algorithm

### Naive approach
- Find the all permutation using recursion.
- store in the ascending order.
- return the kth permutation

Time Complexity: O(n!*n)</br>
Space Complexity: O(n!*n)

### better approach
- create a vector 'num' to store the numbers from 1 to N.
- initialize the factorial variable 'fact' to 1.
- iterate from i=1 to i=N-1 and multiply fact by 'i' and add 'i' to num vector.
- add 'N' to num 
- Initialize an empty string 'res' to store the result.
- subtract 1 from K to consider the 0-based indexing.
- Enter a loop that continues until the num vector is empty.
    - Append the digit at index k/fact from the 'num'.
    - remove the element at index k/facr from the 'num'.
    - if 'num' becomes empty, exit the loop.
    - update 'k' such that <code>k=k%fact</code>
    - update 'fact' such that <code>fact = fact/num.size()</code>
- return the resulting string 'res' as the kth permutation.

Time Complexity: O(n)</br>
Space Complexity: O(n)


