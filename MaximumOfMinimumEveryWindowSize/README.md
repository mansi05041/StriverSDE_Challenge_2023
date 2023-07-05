# [Maximum of minimum for every window size](https://www.codingninjas.com/studio/problems/maximum-of-minimum-for-every-window-size_8230783?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of length N, consisting of integers. Need to find the maximum of minimum for every window size. The size of the window should be vary from 1 to N only.

### Input_output
Input: [1 2 3 4] </br>
Output: [4 3 2 1]

## Algorithm

### Naive Approach
- In this approach we have two nested loops. the Outer loop iterates over the window sizes 1 to n, and inner loop iterates over the array to form each window of the current window size.
```
vector<int> maxMinWindow(vector<int>a, int n){
    vector<int> ans(n,INT_MIN);

    for(int i = 0; i<n;i++){
        for(int j=i;j<n;j++){
            int len = j-i+1;
            int temp = INT_MAX;
            for(int k=i;k<j+1;k++){
                temp = min(temp,a[k]);
                ans[len]= max(ans[len],temp);
            }
        }
    }
    return ans;
}

```

Time Complexity : O(n<sup>3</sup>)</br>
Space Complexity : O(1)

### Optimal Solution
- Calls the previousSmaller function to find the indices of the previous smaller element for each element in the array.
- Calls the nextSmaller function to find the indices of the next smaller element for each element in the array.
- Initialize a vector ans with n elements, where each element is initialized to INT_MIN.
- Iterate over each element in the array.
    - Calculate the length of the window by subtracting the index of the next smaller element from the index of the previous smaller and subtracting 1.
    - update the element at index (length-1) of the ans vector with maximum value between the current element and the existing value at that index.
- Iterate from second last element to the first element of tha ans vector.
    - update each element with the maximum value between the current element and the next element.
- Return the 'ans'

Time Complexity: O(n)</br>
Space Complexity: O(n)
