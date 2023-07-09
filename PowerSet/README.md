# [Power Set](https://www.codingninjas.com/studio/problems/power-set_8230797?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a sorted array of 'N' integers. You have to generate the power set for this array where each subset of this power set is individually sorted.

### Input_output
Input: arr=[1 2 3]</br>
Output:  [ [], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3] ].

## Algorithm
- Create an empty vector of vectors, which will store all the subsets of v.
- Determin the size of the input vector.
- The outer loop iterates from 0 to 2^n-1. This loop generates binary numbers from '000 to 111', where each bit represents whether the corresponding elements from v should be included in the subset.
- Inside the outer loop, a new vector 'temp' is created to store the subset for the current binary number.
- The inner loop iterates over each bit of the binary number.
- The condition <code>num & (1<<i)</code> checks if the ith bit of num is set to 1. If it is then the ith element from v is included in the current subset.
- If this condition is true, the v[i] element is appended to the temp vector.
- After the inner loop finishes, the temp vector represents one subset generated from the current binary number 'num'.
- The temp vector is then added to the res vector.
- After the outer loop finishes, return res vector.

Time Complexity : O(2<sup>n</sup>*n)</br>
Space Complexity : O(2<sup>n</sup>*n)
