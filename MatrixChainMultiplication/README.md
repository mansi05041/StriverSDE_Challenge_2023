# [Matrix Chain Multiplication](https://www.codingninjas.com/studio/problems/matrix-chain-multiplication_8230769?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a chain of matrices A1,A2,A3,...An. Task is to find out the minimum cost to multiply these matrices. The cost of the matrix multiplication is defined as the number of scalar multiplications.

### Input_output
Input: [10 20 30 40] </br>
Output: 200

## Algorithm

### Recursion
```
int Recursion(int i,int j,vector<int>& arr){
  // base case : single matrix
  if(i==j) return 0;

  int minSteps = INT_MAX;

  // partition of array
  for(int k=i;k<j;k++){
    int steps = arr[i-1]*arr[k]*arr[j]+Recursion(i,k,arr)+Recursion(k+1,j,arr);
    minSteps = min(minSteps,steps);
  }
  return minSteps;
}
```
Time Complexity: O(2<sup>n</sup>) </br>
Space Complexity: O(n)

### Memorization
- In the above recursion, we will use Memorization map to save the results of overlapping sub problems.
- after the base case, if the subproblem is already solved then return it.
- at the end of recursion, before returning the result first save it in memorization map.

Time Complexity: O(n<sup>3</sup>) </br>
Space Complexity: O(n) + O(n<sup>2</sup>)

### Tabulation
- Initialize the dp same as used in Memorization
- Set the base case dp[i][i] = 0 for i:[1,N-1]
- Iterate from i=N-1 down to 1
    - Iterate from j=i+1 to N-1
    - Initialize minimum steps 'minSteps' to a large value
    - Perform partioning loop k=i to j-1
    - Calculate the steps of multiplying matrices from i to k, from k+1 to j and the current multiplication.
    - update the minSteps
    - after the partioning update dp[i][j] = minSteps
- Return dp[1][N-1]

Time Complexity: O(n<sup>3</sup>) </br>
Space Complexity: O(n<sup>2</sup>)