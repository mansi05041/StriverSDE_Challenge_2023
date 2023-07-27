# [Maximum Product Subarray](https://www.codingninjas.com/studio/problems/maximum-product-subarray_8230828?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of length N, consisting of integers. Task is to find the contiguous subarray within the array which has the largest product of its elements. Report the maximum product

### Input_output
Input: [-3 4 5] </br>
Output: 20

## Algorithm

### Naive Approach
use the nested loops to generate all possible subarrays and calculate their product. The approach will involve two loops: an outer loop to select the starting index of the subarray and an inner loop to select the ending index

```
int maximumProduct(arr[],n){
    maxProduct = INT_MIN
    for(i=0 to n):
        currentProduct = 1
        for(j=i to n):
            currentProduct*=arr[j]
            maxProduct = max(maxProduct,currentProduct)
    return maxProduct
}
```

Time Complexity : O(n<sup>2</sup>)</br>
Space Complexity : O(1)

### better approach
- Initialize 'prefix', 'suffix' to 1 and 'ans' to INT_MIN
- Iterate through the array using a single loop from i=0 to i=n-1
    - if a zero is encountered, reset the 'prefix' and 'suffix' to 1 to start calculating the product of a new subarray.
    - Calculate the maximum value between 'prefix', 'suffix' and the current value of 'ans'.
- Return the 'ans'

Time Complexity: O(n)</br>
Space Complexity: O(1)
