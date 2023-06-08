# [Longest consecutive Sequence](https://www.codingninjas.com/codestudio/problems/longest-consecutive-sequence_8230708?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of integers 'arr' containing N elements. Task is to return the length of the longest consecutive sequence.

### Input_output
Input: [33 20 34 30 35] </br>
Output: 3

## Algorithm

### Naive Approach
- Sort the array. Then count the maximum length of consecutive sequence.

```
function lengthofLongestConsecutiveSequence(arr):
    sort(arr) // ascending order
    maxLen=1
    currLen=1
    for i from 1 to length(arr)-1:
        if arr[i]-arr[i-1]==1:
            currLen+=1
        else if arr[i]!=arr[i-1]:
            currLen =1
        maxLen = max(maxLen,currLen);
    return maxLen;

```

Time Complexity : O(nlogn)</br>
Space Complexity : O(1)

### Better approach
- Initialize an unordered set.
- Iterate through the input array and insert each element into the set.
- Initialize the maximum length 'maxLen' as 0
- Iterate through the set
    - For each element 'it' in the set, check if 'it-1' is not present in the set. If it is not present, then 'it' is the first element of a consecutive sequence.
    - If above condition is true then, Initialize count as 1 and var as it+1. While var is present in the set increment count and var.
    - update the maxLen

Time Complexity: O(n)</br>
Space Complexity: O(n)
