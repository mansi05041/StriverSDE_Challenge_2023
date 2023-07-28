# [Maximum Sum Increasing Subsequence](https://www.codingninjas.com/studio/problems/maximum-sum-increasing-subsequence_8230821?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
For a given array with N elements, need to find the maximum sum of increasing subsequence from the array.

### Input_output
Input: [9 1 2 8] </br>
Output: 11

## Algorithm

### Recursion
```
int Recursion(int idx,int prev,int arr[],int n){
  // base case
  if(idx==n) return 0;

  // not taking element
  int notTake = Recursion(idx+1,prev,arr,n);
  // take that element
  int take = 0;
  if(prev==-1 || arr[idx]>arr[prev]) {
    take = arr[idx] + Recursion(idx+1,idx,arr,n);
  }

  return max(take,notTake);
}
```
Time Complexity: O(2<sup>n</sup>) </br>
Space Complexity: O(n)

### Memorization
- In the above recursion, we will use Memorization map to save the results of overlapping sub problems.
- After the base case, if the subproblem is already solved then return it.
- At the end of recursion, before returning the result first save it in memorization map.

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(n) + O(n<sup>2</sup>)

### Tabulation
- Initialize the dp same as used in Memorization
- Traverse the array in reverse order, starting from the last element and moving towards the first element.
- For each index 'idx', traverse the 'prev' from 'idx-1' to -1
- For each combination of (idx,prev), calculate the length of LIS by considering two cases:
    - If we do not take the current element arr[idx], then LIS notTake_sum is dp[idx+1][prev+1]
    - If we take the current element arr[idx], then LIS take_sum is arr[idx] + dp[idx+1][idx+1], if the current element is greater than the previous element (arr[idx]>arr[prev]), otherwise we cann't take the current element.
- Update the value of dp[idx][prev+1] with the maximum sum calculated from the above two cases.
- After completing the loop, the value dp[0][0] will represent the maximum sum of increasing subsequence that starts at the first element and considers the previous element as -1.
- Return dp[0][0]

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(n<sup>2</sup>)
