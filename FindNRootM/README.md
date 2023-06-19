# [Find Nth root of M](https://www.codingninjas.com/studio/problems/find-nth-root-of-m_8230799?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two positive integers 'n' and 'm'. you have to return the nth root of m, m<sup>1/n</sup>. If the nth rooth is not an integer return -1.

### Input_output
Input: n=3, m=27 </br>
Output: 3

## Algorithm
- start as 1 and end as m. These variales represent the search space for Nth root.
- Enter a while loop that continues until the start value exceeds the end value.
    - calculate the mid point of the current search.
    - check if the Nth power of mid is equal to m, if true it means 'mid' is the desired Nth root, so return 'mid' as the result.
    - else if pow(mid,n)>m then narrows down the search to the lower half by updating end = mid-1
    - else narrows down the search space to the upper half by updating start = mid+1
- if the while loop completes without finding the Nth root, return -1.

Time Complexity : O(log m)</br>
Space Complexity : O(1)

