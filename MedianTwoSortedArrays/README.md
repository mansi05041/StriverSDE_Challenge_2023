# [Median of two Sorted arrays](https://www.codingninjas.com/studio/problems/median-of-two-sorted-arrays_8230788?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given two sorted arrays 'a' and 'b' of size n and m respectively. Find the median of the two sorted arrays.

### Input_output
Input: a = [2,4,6] and b = [1,3,5] </br>
Output: 3.5

## Algorithm

### Naive Approach
- store the all elements in a single array.
- sort that combined array.
- return the median.
Time Complexity: O(n logn)</br>
Space Complexity: O(n)

### Better approach using merge sort
- merged the both arrays using two pointers.
- return the median of combined array.
Time Complexity: O(n)</br>
Space Complexity: O(n)

### Better approach using merge sort without creating combined array
- using two pointer, reach to the median position
- return the median.
Time Complexity: O(n)</br>
Space Complexity: O(1)

### Optimized approach using Binary search
- Initialize variable n1 and n2 to store the sizes of array.
- check if n2 is smaller than n1, if so swap the arrays.
- calculate the total elements and the index half that represents the middle index
- Initialize variable low and high to perform binary search on array a. low represents the start index, and high represents the end index.
- Repeat the following steps until low<=high
    - calculate the cut positions 'cut1' and 'cut2' to split arrays 'a' and 'b' respectively.
    - determine the values of the left and right elements for each array based on the cut positions.
    - check if the cuts are valid by comparing the left and right elements of both arrays.
    - If the cuts are valid, return the median.
    - if the left elements of a are greater than the right elements of b, adjust high index for binary search. otherwise adjust low index.
- if no median found, return 0.0
Time Complexity: O(log(min(n1,n2)))</br>
Space Complexity: O(1)
