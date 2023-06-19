# [Valid Sudoku](https://www.codingninjas.com/studio/problems/valid-sudoku_8230704?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a 9X9 2d matrix with some cells filled with digits(1-9), and some empty cells denoted by 0. Task is to find whether there exists a way to fill all the empty cells with some digit(1-9) such that the final matrix is a valid sudoku solution.
- Each of the digits 1-9 must occur exactly once in each row.
- Each of the digits 1-9 must occur exactly once in each column.
- Each of the digit 1-9 must occur exactly once in each of the 9 3X3 sub matrices of the matrix.


## Algorithm
- Uses a backtracking approach to find a valid solution. It iterates through each cell of the sudoku grid and if a cell is vacant, it tries to place a number 1-9 in that cell.
    - It checks the validity of the number that can be placed., if it is valid then the number is assigned to the cell.
        - the function calls recursively to solve remaining puzzle. If the puzzle is solved successfully. It return true.
        - if not, it backtracks by setting the cell value to 0 and tries the next number. If no suitable number is found, it returns false.
Time Complexity : O(9<sup>n</sup>)</br>
Space Complexity : O(1)
