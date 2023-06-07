# [Count Inversion](https://www.codingninjas.com/codestudio/problems/count-inversions_8230680?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of integers 'arr' containing N elements all distinct values, find the total number of 'inversions' that may exist.
An inversion is defined for a pair of integers in the array when two conditions are met.
- arr[i]>arr[j]
- i< j

### Input_output
Input: [3 2 2] </br>
Output: 3

## Algorithm

### Naive Approach
- In nested loop compare the all elements to calculate inversions
```
function getInversionsBruteForce(arr, n):
    inversions = 0
    for i = 0 to n-2:
        for j = i+1 to n-1:
            if arr[i] > arr[j]:
                inversions += 1
    return inversions

```

Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(1)

### Better approach using merge sort
- using modified mergeSort that recursively divides the array into two halves, calls iteslf on each half and merges them using merge fucntion. Keeps the track of all inversion count by summing the inversions in each recursive call.
- In merge Function:
    - intialize i and j as left and mid+1 and k =0 and inv (inversion count)= 0
    - creates a temporary vector to store the merged sorted array.
    - it compares elements at indices 'i' and 'j' of the array.
    - if(arr[i]>arr[j]), then increment inv by (mid-i+1) because all the elements from i to mid are greater than arr[j] and forms inversions.
    - Stores the smaller element between arr[j] and arr[i] in temp[k] and increments k and (j or i) accordingly.
    - Copies the remaining elements from either the left or right subarray of temp.
    - Finally copies the elements from temp back to original array.

Time Complexity: O(n logn)</br>
Space Complexity: O(n)
