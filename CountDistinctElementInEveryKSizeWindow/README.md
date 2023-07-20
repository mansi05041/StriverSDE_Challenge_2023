# [Count Distinct Element in Every K size Window](https://www.codingninjas.com/studio/problems/count-distinct-element-in-every-k-size-window_8230749?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of integers 'arr' of size 'n' and an integer 'k'. Task is to find the total number of distinct elements present in every 'K' sized window of the array. A 'K' sized window can also be viewed as a series of continuous 'K' elements present in the sequence.

### Input_output
Input: arr=[1 2 1 3 4 2 3], K = 4 </br>
Output: [3 4 4 3]

## Algorithm

### Naive Approach
- For each window size k do the following
    - Create an empty set to store the distinct elements in the current window
    - Traverse the input vector with a window of size 'k'
    - For each element in the current window, add it to the set
    - after processing the entire window, add the size of set to the result vector.
- Return the result vector

Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(k)

### Better approach
- Create an empty vector 'res' to store the result.
- Create an map to store the frequency of elements in the current window.
- Traverse the first k elements of the input vector 'arr' and update the frequency in the map 'mp'
- Add the size of the map to the result vector/
- For the rest of the elements in arr, do the following:
    - Remove the element at 'i-k' index from the map 'mp' since it is no longer part of the current window.
    - if the frequency of the element at i-k becomes zero after removal, erase it from the map.
    - add the element at i index to the map.
    - add the size of the map to the result vector.
- Return the result vector.

Time Complexity: O(n)</br>
Space Complexity: O(k)
