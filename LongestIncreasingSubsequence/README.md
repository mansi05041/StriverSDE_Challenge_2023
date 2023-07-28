# [Longest Increasing Subsequence](https://www.codingninjas.com/studio/problems/longest-increasing-subsequence_8230689?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
For a given array with N elements, need to find the length of the longest subsequence from the array such that all the elements of the subsequence are sorted in strictly increasing order.

### Input_output
Input: [5 4 11 1 16 8] </br>
Output: 3

## Algorithm

### Recursion
```
int Recursion(int idx,int prev,int arr[],int n){
  // base case
  if(idx==n) return 0;

  // not taking element
  int len = 0 + Recursion(idx+1,prev,arr,n);
  // take that element
  if(prev==-1 || arr[idx]>arr[prev]) len = max(len,1 + Recursion(idx+1,idx,arr,n));

  return len;
}
```
Time Complexity: O(2<sup>n</sup>) </br>
Space Complexity: O(n)

### Memorization
- In the above recursion, we will use Memorization map to save the results of overlapping sub problems.
- after the base case, if the subproblem is already solved then return it.
- at the end of recursion, before returning the result first save it in memorization map.

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(n) + O(n<sup>2</sup>)

### Tabulation
- Initialize the dp same as used in Memorization
- Traverse the array in reverse order, starting from the last element and moving towards the first element.
- For each index 'idx', traverse the 'prev' from 'idx-1' to -1
- For each combination of (idx,prev), calculate the length of LIS by considering two cases:
    - If we do not take the current element arr[idx], then LIS length is dp[idx+1][prev+1]
    - If we take the current element arr[idx], then LIS length is 1 + dp[idx+1][idx+1], if the current element is greater than the previous element (arr[idx]>arr[prev]), otherwise we cann't take the current element.
- Update the value of dp[idx][prev+1] with the maximum length calculated from the above two cases.
- After completing the loop, the value dp[0][0] will represent the length of longest increasing subsequence that starts at the first element and considers the previous element as -1.
- Return dp[0][0]

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(n<sup>2</sup>)

### Space optimization
- Create a dp array of size 'n' initialized with all elements set to 1. 
- Traverse the array from left to right using a loop with index 'idx' [0,n-1]
- For each 'idx', traverse the array from [0,idx-1] using another loop with index 'prev'
- For each combination of (idx,prev), check if the elements at index 'prev' is less than the element at index 'idx' 
- If the above condition is satisfied, then arr[idx] can be included in the increasing subsequence ending at index 'idx', so update the value of dp[idx] as max(dp[idx],1+dp[prev])
- After the loop is completed, return the maximum value in the dp array.

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(n)

### optimal Solution using binary search
- Create an empty vector temp to store a temporary subsequence
- Push the first element of the array into the temp vector and initialize a variable len to 1.
- Traverse the array arr
    - for each element at index 'i' check if (arr[i]>temp.back())
    - if the above condition is true then push arr[i] into temp and increment len
    - else use binary search (lower_bound) to find the first element in the temp vector that is not less than arr[i]. Replace the element with arr[i].
- return len

Time Complexity: O(n*logn) </br>
Space Complexity: O(n)
