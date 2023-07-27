# [Rod Cutting Problem](https://www.codingninjas.com/studio/problems/rod-cutting-problem_8230727?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a rod of length 'N' units. The rod can be cut into different sizes and each size has a cost associated with it. Determine the maximum cost obtained by cutting the rod and selling its pieces.

### Input_output
Input: [2 5 7 8 10] </br>
Output: 12

## Algorithm

### Recursion
```
bool Recursion(vector<int>& price,int idx,int rodLength){
  // base case
  if(idx==0) return price[0]*rodLength;

  // not taking that length
  int notTake = 0 + Recursion(price,idx-1,rodLength);
  // take that length
  int take = INT_MIN;
  if(idx+1<=rodLength) take = price[idx] + Recursion(price,idx,rodLength-idx-1);

  return max(notTake,take);
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
- Set the base case for the smallest rod piece of length 1.
- Iterate over each rod piece
    - For each rod piece of length, calculate the maximum revenue can be obtained.
    - For each possible lengths consider two scenarios:
        - Not cutting the rod piece
        - Cutting the rod piece
    - choose the maximum value 
- return dp[n-1][n]

Time Complexity: O(n<sup>2</sup>) </br>
Space Complexity: O(n<sup>2</sup>)