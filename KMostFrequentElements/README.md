# [K Most Frequent Elements](https://www.codingninjas.com/studio/problems/k-most-frequent-elements_8230853?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an integer array 'arr' and an integer 'K'. Task is to find the 'K' most frequent elements in 'arr'. Return the elements sorted in ascending order.

### Input_output
Input: [1 2 2 3 3], k=2</br>
Output: [2 3]

## Algorithm

### better approach using maxheap
- store the frequency of each element in the map.
- push the pairs from map into maxheap such that {freq,ele}.
- Store the result into ans.
- push the every top element of max heap into ans until the k becomes zero.
- sort the ans vector.
- return ans.

Time Complexity: O(n logn)</br>
Space Complexity: O(n+k)


