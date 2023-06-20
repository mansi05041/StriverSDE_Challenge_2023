# [Single Element in a sorted Array](https://www.codingninjas.com/studio/problems/single-element-in-a-sorted-array_8230826?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a sorted array of 'n' numbers such that every number occured twice in the array except a special number that appears only once. Return that special number.


### Input_output
Input: matrix = [1 1 3 5 5 ] </br>
Output: 3

## Algorithm

### Brute Force
- The given pseudo code 
```
function(arr,n){
    if(n==1) return arr[0];
    if(arr[0]!=arr[1]) return arr[0];
    if(arr[n-1]!=arr[n-2]) return arr[n-1];

    for(int i=1;i<n-2;i++){
        if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]) return arr[i];
    }

    return -1;
}
```
Time Complexity : O(n) </br>
Space Complexity : O(1)

### better approach
- check for the base case
    - if array contains only one element, return that element.
    - if the first element is not equal to the second element, it is the non-duplicate element.
    - if the last element is not equal to the second last element, it is the non-duplicate element.
- initialize the lower bound 'low' to 1 and upper bound 'upper' to n-2.
- Enter a binary search loop while low<=high:
    - calculate the middle index
    - check if the element at the middle index is not equal to its adjacent elements. If, so it is the non duplicate element.
    - if the middle index is odd and element is equal to the element at its left side. It means the duplicate element is the left half. update low = mid+1 to search in the right half.
    - if the middle index is even and element is equal to the element at its right side. It means the duplicate element is the left half. update low = mid+1 to search in the right half.
    - otherwise, duplicate is in the right half. update high = mid-1, to search in the left half.
- return -1, dummy statement

Time Complexity : O(log n)</br>
Space Complexity : O(1)

