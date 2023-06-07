# [Unique Paths](https://www.codingninjas.com/codestudio/problems/unique-paths_8230802?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Find the total number of unique paths from (0,0) to (M-1,N-1) where M and N are the rows and columns respectively. To traverse the matrix, you can either move right or down at each step.

### Input_output
Input: M=2, N=2 </br>
Output: 2

## Algorithm

### Memorization
- Define a recursive fuunction that takes the current position (targetR,targetC) and the grid dimension (m,n) along with a memorization table 'dp' to store the previously computed result.
- check the base case, if we reached the bottom-right corner that is targetR==m-1 and targetC==n-1, return 1.
- check the out boundary case. if the current indices are out of the boundary then return 0.
- check if the subproblem is already solved by looking up the dp table, then return the stored result.
- recursively call the solve function for the right and down direction.
- return and stored the result in the dp table as right + down.

Time Complexity : O(m*n) </br>
Space Complexity : O(m*n)

### Tabulation
- create a 2d dp table of size (m+1)X(n+1) to store the number of unique paths for each position in the grid.
- set the base case: Intialize the last row and last column of the dp table to 1. Since there is only one way to reach bottom-right corner for each position in the last row or last column.
- Iterate from the i = m-1 to 1  and j = n-1 to 1.
    - for each position (i,j) calculate the unique path as
    <code>dp[i][j]=dp[i+1][j]+dp[i][j+1]</code>
- return dp[1][1] the value stored in the top-left corner of the dp table.

Time Complexity : O(m*n)</br>
Space Complexity : O(m*n)

<code>n: matrix row size </br>
m: matrix column size </code>