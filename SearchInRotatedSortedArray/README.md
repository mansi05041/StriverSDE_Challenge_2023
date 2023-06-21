# [Search in Rotated Sorted Array](https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_8230687?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Find the key in rotated sorted array. If not present then return -1.

### Input_output
Input: [2 5 -3 0], key=2</br>
Output: 0

## Algorithm

### Naive Approach
- Use linear search technique to find the element in the array.

Time Complexity : O(n)</br>
Space Complexity : O(1)

### Better approach using binary search
- Initialize two pointers 'low' and 'high' to start and end indices of the array, respectively.
- Enter a while loop that continues as long as 'low' is less than or equal to 'high'.
    - Calculate the middle index 'mid'.
    - check if the element at the index 'mid' is equal to the key, if so return mid
    - check if the left half array from low to mid is sorted
        - if the left half is sorted, check if the key lies within the range of arr[low] to arr[mid], if so update high = mid-1 to search in the left half. Otherwise, update low = mid+1 to search in the right half.
    - else then the right half will be sorted. now check if the key lies within the range of arr[mid] to arr[high], if so update low = mid+1 to search in the right half. Otherwise, update high = mid-1 to search in the left half.
- if the key is not found after the loop, return -1

Time Complexity : O(logn)</br>
Space Complexity : O(1)


