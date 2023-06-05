# [Merge Two Sorted Arrays](codingninjas.com/codestudio/problems/merge-two-sorted-arrays_8230835?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively. </br>
Merge nums1 and nums2 into a single array sorted in non-decreasing order. </br>
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

### Input_output
Input: m = 3, n = 2 </br>
arr1= [1 2 3 0 0], arr2= [4 5] </br>
Output: [1 2 3 4 5]

## Algorithm

### Brute force 
- Fill the last positions of arr1 with the elements of arr2.
- Sort the final arr1 array.

Time Complexity: O(nlogn) </br>
Space Complexity: O(1)

### Better approach
- Initialize two indices 'i' and 'j' to point to the last elements of 'arr1' and 'arr2'. set i=m-1 and j=n-1.
- Start a loop while i>=0 and j>=0
    - Compare arr1[i] and arr2[j]
    - if arr1[i]>arr2[j] set arr1[i+j+1]=arr1[i], decrement i
    - else set arr1[i+j+1]=arr2[j], decrement j
- After the loop ends, there might be some remaining elements in 'arr2'. Therefore, include those elements into arr1.
- return the modified array arr1

Time Complexity: O(n)</br>
Space Complexity: O(1)

