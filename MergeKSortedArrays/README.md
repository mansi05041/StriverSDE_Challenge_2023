# [Merge K sorted arrays](https://www.codingninjas.com/studio/problems/median-of-two-sorted-arrays_8230788?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given k different arrays, which are sorted individually (in ascending order). You need to merge all the given array such that the output array should be sorted in ascending order.

### Input_output
Input: a = [[1 5 9] [45 90] [2 6 78 100 234] [0]] </br>
Output: [0, 1, 2, 5, 6, 9, 45, 78, 90, 100, 234]

## Algorithm

### Better approach using merge sort
- merged the every two arrays using two pointers until we get single array
- return the merged array.
  
Time Complexity: O(n<sup>2</sup>)</br>
Space Complexity: O(n)

### Optimized approach using minHeap
- create a min heap of pair(ele,(arN,idx)) where ele is the value of kArrays[arN][idx].
- store the first element of every vector into the min heap.
- Initialize the array, say ans.
- perform the following steps until the heap becomes empty.
    - remove the top element.
    - extract ele, arN, idx
    - if idx+1 is less than kArrays[arN].size(), then push the pair (kArrays[arN][idx+1],{arN,idx+1}) into priority queue.
    - push the ele into the ans.
- return the ans.

Time Complexity: O(k+nlogn)</br>
Space Complexity: O(k+n)
