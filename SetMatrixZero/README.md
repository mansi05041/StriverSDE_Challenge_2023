# [Set Matrix Zero](https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.


### Input_output
Input: matrix = [[7,19,3][4,21,0]] </br>
Output: after modification [[7,19,0][0,0,0]]

## Algorithm

### Brute Force
- Find the element 0 in the matrix. For each 0's ith and jth position set the row and columns all element to -1.
- Then change the value of -1 to 0 at the end of returning.

Time Complexity : O(n*m*(n+m)) + O(n*m) </br>
Space Complexity : O(1)

### better approach
- Declare two arrays, row of size n and col of size m both initialized with 0.
- Traverse the matrix to find element 0, on encountering with 0 set row[i]=1 and col[j]=1 for any cell(i,j).
- Again traverse the matrix and set the cell(i,j) to 0 , if either row[i] or col[j] marked as 1.

Time Complexity : O(n*m)</br>
Space Complexity : O(n)

<code>n: matrix row size </br>
m: matrix column size </code>