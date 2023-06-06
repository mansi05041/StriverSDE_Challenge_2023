# [Search in a 2D matrix](https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_8230773?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a 2D array 'mat' of size M X N, where M and N denote the number of rows and columns, respectively. The elements of each row are sorted in non-decreasing order.

### Input_output
Input: mat = [[1 2 3 4] [5 6 7 8] [9 10 11 12]], target = 8 </br>
Output: true

## Algorithm
- Intialize row to 0, representing the first row and col to mat[0].size()-1 representing the last column of the matrix.
- Repeat the following steps until the row is less than number of rows in the matrix and col is greater than or equal to 0.
    - compare the mat[row][col] with target, if equal return true.
    - else if target is greater than mat[row][col], then increment the row by 1.
    - else decrement the col by 1
- return false, if the target element not found

Time Complexity : O(n+m)</br>
Space Complexity : O(1)
