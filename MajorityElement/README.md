# [Majority Element](https://www.codingninjas.com/codestudio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of length N, consisting of integers. Find the majority element in the array. If there is no majority, print -1.

### Input_output
Input: [2 3 9 2 2] </br>
Output: 2

## Algorithm

### Naive Approach
- Use the hash map to store the element and their frequency and return those element that have frequency more than n/2

```
int findMajorityElement(int arr[],int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) mp[arr[i]]++; // count the frequency of each element
    // find the element with frqeuency greater than n/2
    for(auto it: mp){
        if(mp.second>n/2) return mp.first;
    }
    return -1; // no majority element found
}
```

Time Complexity : O(n)</br>
Space Complexity : O(n)

### Boyer-Moore voting algorithm
- Initialize an index variable to 0 and a count variable to 1.
- Iterate through the array from index 1 to n-1.
    - If the current element is equal to the element at the index, increment the count.
    - otherwise, decrement the count.
    - If the count becomes 0, update the index to the current position and reset the count to 1.
- After the loop check if the count is greater than 0, that means there can be a majority element present in the array.
    - set ele = arr[index]
    - iterate through the array and count the occurences of 'ele'.
    - if the count is greater than n/2. return 'ele' as the majority element.
- if no majority element is found, return -1.

Time Complexity: O(n)</br>
Space Complexity: O(1)
