# [Rotate Matrix](https://www.codingninjas.com/codestudio/problems/rotate-matrix_8230774?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a 2-dimensional matrix of size 'N'X'M', rotate the elements of the matrix clockwise.

### Input_output
Input: mat = [ [1,2,3] [4,5,6] [7,8,9] ] </br>
Output: [ [4,1,2] [7,5,3] [8,9,6] ]

## Algorithm
- Initialize variables 'top','left','bottom' and 'right' to define the boundaries of the current layer of the matrix.
- Initialize variables 'prev' and 'curr' to hold the previous and current elements during rotation.
- Iterate while top<=bottom and left<=right to process each layer of the matrix.
    - Check if top is equal to right ot left is equal to bottom. If true, it means we have reached the center of the matrix, and no further rotation is required. In such cases, break out of the loop.
    - set prev to the element at mat[top+1][left]
    - rotate the top row by moving elements from left to right. increment the top.
    - rotate the right column by moving elements from top to botom. decrement the right.
    - rotate the bottom row by moving elments from right to left. decrement the bottom.
    - rotate the left column by moving elements from bottom to top. increment the left.

Time Complexity : O(m*n)</br>
Space Complexity : O(1)
