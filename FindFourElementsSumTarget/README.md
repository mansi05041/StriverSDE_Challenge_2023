# [Find Four Elements That sums to a Given value](https://www.codingninjas.com/codestudio/problems/find-four-elements-that-sums-to-a-given-value_8230785?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of integers 'arr' containing N elements and an integer value 'Target'. Need to check whether there exists four numbers such that 0<=i<j<k<l<N. 
</br>
<code>arr[i]+arr[j]+arr[k]+arr[l]=Target</code>

### Input_output
Input: arr= [1 3 3 10 2], target=9 </br>
Output: Yes

## Algorithm

### Naive Approach
- In nested loop try all the combinations.
```
function fourSum(arr, target, n):
    for i = 0 to n-3:
        for j = i+1 to n-2:
            for k = j+1 to n-1:
                for l = k+1 to n:
                    if arr[i]+arr[j]+arr[k]+arr[l]==target:
                        return true
    return false

```
Time Complexity : O(n<sup>4</sup>)</br>
Space Complexity : O(1)

### Better approach
- from the above approach, eliminate the inner most loop and use binary search to find the target-arr[i]-arr[j]-arr[k]
```
function fourSum(arr, target, n):
    for i = 0 to n-3:
        for j = i+1 to n-2:
            for k = j+1 to n-1:
                ele = target-arr[i]-arr[j]-arr[k]
                return BinarySearch(arr,k+1,n-1,ele) // find the required element in the range of [k+1,n-1] in the array.
```
Time Complexity : O(n<sup>3</sup>logn)</br>
Space Complexity : O(1)

### optimal approach
- sort the input array in ascending order.
- Initialize two nested loops to iterate over possible pairs of elements (arr[i] and arr[j]) from the vector
- For each pair, set the left pointer to j+1 and the right pointer to the last element (n-1) and calculate the current sum as <code>arr[i]+arr[j]</code>
- Follow the steps until left<right becomes false.
    - if the sum+arr[left]+arr[right]==target then return "Yes".
    - else if sum+arr[left]+arr[right]<target then increment the left.
    - else decrement the right.
- return "No", if no four elements are found that sum up to the target.

Time Complexity : O(n<sup>3</sup>)</br>
Space Complexity : O(1)

