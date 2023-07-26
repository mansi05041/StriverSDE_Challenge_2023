# [Minimum Path Sum](https://www.codingninjas.com/studio/problems/minimum-path-sum_8230791?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a 2D grid with n rows and m columns. Each point has some cost associated with it. Find a path from top left to the bottom right, minimize the sum of cost of all the numbers along the path.

### Input_output
Input: arr = [[5 9 6] [11 5 2]] </br>
Output: 21

## Algorithm

### Recursion
```
bool Recursion(int i,int j,vector<vector<int>>& grid){
    // base case
    // 1. reach the destination
    if(i==0 && j==0) return grid[0][0];
    // 2. out of the boundary
    if(i<0 || j<0) return 1e9;

    // explore the ways 
    int up = grid[i][j] + Recursion(i-1,j,grid);
    int left = grid[i][j] + Recursion(i,j-1,grid);

    return min(up,left);
}
```

Time Complexity: O(2<sup>n</sup>) </br>
Space Complexity: O(n)

### Memorization
- In the above recursion, we will use Memorization map to save the results of overlapping sub problems.
- after the base case, if the subproblem is already solved then return it.
- at the end of recursion, before returning the result first save it in memorization map.

Time Complexity: O(n*m) </br>
Space Complexity: O(n) + O(n*m)

### Tabulation
- Initialize a 2d dp table with dimension (n*m) and initialize all cells to -1.
- Fill the dp table using a bottom-up approach. Using nested loops: The outer loop iterates over each row(i) in the grid, and the inner loop iterates over each column(j) in the grid.
- For the cell(i,j) calculates the minimum sum path to reach that cell from the top-left corner.
- if the current cell is top-left corner (0,0) then set <code>dp[i][j] = grid[i][j]</code>
- For other cells(i,j) considers two possible ways to reach that cell from the top-left corner.
    - Move from the cell above (i-1,j) to the current cell (i,j)
    - Move from the cell left (i,j-1) to the current cell (i,j)
    - set dp[i][j] minimum of the above two paths
- return dp[n-1][m-1]

Time Complexity: O(n*m) </br>
Space Complexity: O(n*m)