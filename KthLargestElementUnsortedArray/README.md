# [K-th Largest element in unsorted array](https://www.codingninjas.com/studio/problems/kth-largest-element-in-the-unsorted-array_8230740?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array consisting of N distinct positive integers and a number K. Task is to find the Kth largest element in the array.

### Input_output
Input: arr1 = [5 6 7 8],k = 2</br>
Output: 7 </br>

## Algorithm

### Naive approach
- sort the array in descending order
- return arr[k-1] 

Time Complexity: O(n*logn)</br>
Space Complexity: O(1)

### better approach using minHeap
- create a min heap
- Iterate through each element 'it' in the given vector
    - push 'it' into the min heap
    - if the size of the min heap becomes greater than k, remove the smallest element by calling pq.pop()
- return top element of min heap

Time Complexity: O(n logk)</br>
Space Complexity: O(k)

