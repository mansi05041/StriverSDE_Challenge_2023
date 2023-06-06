# [Find Duplicate in Array](https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_8230816?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of integers 'arr' containing N elements. Each integer is in the range[1,N-1], with exactly one element repeated in the array. The task is to find the duplicate element.

### Input_output
Input: [1 3 4 2 2] </br>
Output: 2

## Algorithm

### Naive Approach
- In nested loop compare the all elements.
```
function findDuplicateBruteForce(arr, n):
    for i = 0 to n-2:
        for j = i+1 to n-1:
            if arr[i] == arr[j]:
                return arr[i]
    
    return -1

```

Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(1)

### Better approach
- Iterate through each element in the array from index 0 to n-1, where n is the size of the array.
- For each element, take its absolute value and store it in the variable 'pos'.
- Check if the value at the arr[pos] is negative. If it is negative, that means the element has already occured before, and we have found a duplicate then return the pos.
- otherwise, update the value of arr[pos] by multiplying by -1.
- If no duplicate is found return -1 

Time Complexity: O(n)</br>
Space Complexity: O(1)
