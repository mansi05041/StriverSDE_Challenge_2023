# [N Queens](https://www.codingninjas.com/codestudio/problems/n-queens_8230707?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a integer 'n'. For a given nXn chessboard, find a way to place n queens such that no queen can attack any other queen on the chessboard. A queen can be killed when it lies in the same row, or same column, or the same diagonal of any of the other queens. 

### Input_output
Input: 4 </br>
Output: [[0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0] [0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0 ]]

## Algorithm
Use the recursive function implements the backtracking algorithm.
- base case: when col becomes equal to n, indicating that all columns have been processed. then convert the curent configuration into a flat vector and append it to answer.
- The function iterates through each row for current column 'col'. It checks if the current position is safe to place a queen by verifying that the left row, upper diagonal and lower diagonal are all available. If the position is safe, the queen is placed in that position by setting temp[row][col] to 1, and the availability vectors are updated accordingly(leftRow[row], upperDiagonal[row+col], lowerDiagonal[n-1+col-row])
- Call the recursive function to process the next column that is col+1.
- After the recursive call returns, the function performs backtracking by undoing the changes made in the current row and column. The queen is removed from the current position by setting temp[row][col] back to 0, and the availability vectors are reset.
- The function continues the loop to try different rows for the current column, exploring other possibilities.

Time Complexity : O(n!)</br>
Space Complexity : O(n<sup>2</sup>)
