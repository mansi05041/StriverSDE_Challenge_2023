# [3Sum](https://www.codingninjas.com/codestudio/problems/3sum_8230739?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array ARR consisting of N integers. The task is to find all the the distinct triplets present in the array which adds up to a given number k.

### Input_output
Input: arr= [10 5 5 5 2], k=12 </br>
Output: [[5 5 2]]

## Algorithm

### Naive Approach
- In nested loop try all the possible combination and stored it in the result.

```
function findTriplets(arr,K):
    result = empty list
    sort(arr)

    for i = 0 to n-3:
        for j=i+1 to n-2:
            for k=j+1 to n-1:
                if arr[i]+arr[j]+arr[k] = K:
                    triplet = [arr[i],arr[j],arr[k]]
                    result.append(triplet)
    
    distinctTriplets = set(result) // remove duplicates
    return distinctTriplets;

```
Time Complexity : O(n<sup>3</sup>)</br>
Space Complexity : O(1)

### better approach
- sort the input array in ascending order.
- Initialize an empty vector of vectors called 'result' to store the triplets.
- Iterate through the array from the start until the third to last element.
- Check for duplicate values: if the current element is the same as the previous element, skip it to avoid duplicates.
- set two pointers: "low" pointing to the next element after the current element and "high" pointing to the last element.
- calculate the target sum as k - current element.
- while low<high  , repeat the following steps:
    - if the arr[low]+arr[high] equals to target sum, we found a triplet. Add the current triplet to the result. Then move "low" pointer to the next unique element and move "high" pointer to the previous unique elements. Also increment low and decrement high.
    - else if arr[low]+arr[high] less than target sum, the increment the low.
    - else decrement the high.

Time Complexity: O(n<sup>2</sup>)</br>
Space Complexity: O(1)
