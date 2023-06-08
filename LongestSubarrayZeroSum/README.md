# [Longest Subarray Zero Sum](https://www.codingninjas.com/codestudio/problems/longest-subarray-zero-sum_8230747?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of integers 'arr' containing positive and negative elements. Task is to find the length of the longest subarray whose sum is zero.

### Input_output
Input: [1 3 -1 4 -4] </br>
Output: 2

## Algorithm

### Naive Approach
- In nested loop calculate the sum of every subarray.
```
int longestSubarrayLength(vector<int>& arr){
    int maxLength=0;
    for(int i=0;i<arr.size();i++){
        int sum=0;
        for(int j=i;j<arr.size();j++){
            sum+=arr[j];
            if(sum==0) maxLength = max(maxLength,j-i+1);
        }
    }
    return maxLength;
}

```

Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(1)

### Better approach
- Intialize an unordered map to store the prefix sums and their corresponding indices.
- Initialize maxLength to 0, which represents the maximum length of the subarray with a sum of zero.
- calculate the prefix sum of the input array.
- Iterate over the prefix sum and perform the following steps:
    - if arr[i]==0 , then update maxLength = i+1
    - else if arr[i] is present in the map , then update maxLength as max(maxLength,i-mp[arr[i]])
    - else store the arr[i] as key in the map with value i.
- return the maxLength

Time Complexity: O(n)</br>
Space Complexity: O(n)
