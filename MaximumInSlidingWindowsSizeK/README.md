# [Maximum in Sliding Windows of Size K](https://www.codingninjas.com/studio/problems/maximum-in-sliding-windows-of-size-k_8230772?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given an array of integers of length 'N', there is a sliding window of size 'K' which moves from the beginning of the array, to the very end. You can only see the 'K' numbers in a particular window at a time. For each N-K+1 different windows thus formed, Task is to return the maximum element in each of them, from the given array.

### Input_output
Input: [4 2 1 4 4], k = 2 </br>
Output: [4 2 4 4]

## Algorithm

### Naive Approach
- using nested loops, for each window the outer loop starts from index 0 upto n-k and the inner loop starts from i+1 to i+k-1. Find the maximum element within the current window.
```
vector<int> slidingWindowMaximum(vector<int>& nums, int k){
    int n = nums.size();
    vector<int> result;

    for(int i=0;i<=n-k;i++){
        int maxElement = nums[i];
        for(int j=i+1;j<i+k;j++){
            maxElement = max(maxElement,nums[j]);
        }
        result.push_back(maxElement);
    }
}
```
Time Complexity: O(n*k)</br>
Space Complexity: O(n)

### Optimized Algorithm
- Initialize an empty deque 'dq' to store indices of elements in the array.
- Initialize an empty vector 'v' to store the maximum elements for each sliding window.
- Iterate over the array 'nums' from index 0 to n-1, where n is the size of nums.
- For each iteration:
    - Check if the deque 'dq' is not empty and if the front element of 'dq' is equal to i-k. If true, it means that the front element is out of the current sliding window, so remove it from the front of 'dq'.
    - Check if the deque 'dq' is not empty and if the value of 'nums' at the back of the element of 'dq' is less than or equal to the value of nums at the current index 'i'. If true, it means that the back element of dq is smaller and not useful for finding the maximum in the current sliding window, so remove it from the back of dq until a greater element is encountered.
    - Push the current index 'i' to the back of dq.
    - Check if the current index 'i' is greater than or equal to 'k-1'. If true, it means that the first sliding window is complete, so the maximum element for this window is the value of nums at the front of dq. Append this maximum element to the vector 'v'.
- After iterating through all the elements, return the vector 'v' containing the maximum elements for each sliding window.

Time Complexity: O(n)</br>
Space Complexity: O(k)
