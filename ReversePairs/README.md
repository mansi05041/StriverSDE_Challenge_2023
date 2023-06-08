# [Reverse pairs](https://www.codingninjas.com/codestudio/problems/reverse-pairs_8230825?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of integers 'arr' of size 'n'. we call pair(i,j) a reverse pair when i<j and arr[i]>2*arr[j]. Task is to find the number of reverse pairs present in the given arr.

### Input_output
Input: [6 4 8 2 1 3] </br>
Output: 6

## Algorithm

### Naive Approach
- In nested loop compare the all elements to calculate all reverse pairs.
```
function getReversePairs(arr, n):
    pairs = 0
    for i = 0 to n-2:
        for j = i+1 to n-1:
            if arr[i] > 2* arr[j]:
                pairs += 1
    return pairs

```

Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(1)

### Better approach using merge sort
- using modified mergeSort that recursively divides the array into two halves, calls iteslf on each half and merges them using merge fucntion. Keeps the track of all reverse pairs by summing the pairs in each recursive call.
- In merge Function:
    - intialize  j = mid+1 and pair (reverse pairs)= 0
    - iterate over the elements from left to mid, for each element arr[i], find the number of elements in the range [j,right] that satisfy the condition arr[i]>2*arr[j], then increment pair by j-(mid+1).
    - intialize i=left, j=mid+1, k=0
    - creates a temporary vector to store the merged sorted array.
    - it compares elements at indices 'i' and 'j' of the array.
    - Stores the smaller element between arr[j] and arr[i] in temp[k] and increments k and (j or i) accordingly.
    - Copies the remaining elements from either the left or right subarray of temp.
    - Finally copies the elements from temp back to original array.
    - return the pairs

Time Complexity: O(n logn)</br>
Space Complexity: O(n)
