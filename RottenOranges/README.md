# [Rotting Oranges](https://www.codingninjas.com/studio/problems/rotting-oranges_8230701?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Input_Output](#input_output)
- [Algorithm](#algorithm)

## Question
Given a grid containing some oranges. Each cell of this grid has one of the three integers values:
- value 0- representing empty cell
- value 1- representing a fresh orange
- value 2- representing a rotten orange

Every second, any fresh orange that is adjacent(4-directionally) to a rotten orange becomes rotten. Your task is to find out minimum time after which no cell has a fresh orange. If its impossible to rot all the fresh oranges then print -1.

### Input_output
Input: [ [2 1 1] [1 1 0] [0 1 1] ] </br>
Output: 4

## Algorithm
- Initialize the time variable to 0 and countFresh variable to 0.
- Create a 2D visited matrix of size n x m and initialize all elements to 0.
- Create a queue of pairs, where each pair contains coordinated (i,j) of a rotten orange and the time it took for the orange to rot.
- Iterate through the grid and do the following:
    - if the current grid contains a rotten orange, push its coordinates(i,j) and time 0 into the queue. Mark the corresponding visited cells as 1.
    - if the current contains a fresh orange increment the countFresh variable by 1.
- Create two arrays, nextI and nextJ which represents the possible directions to move (right, down, up, left)
- while the queue is not empty, do the following:
    - pop the front element from the queue and store its row, column and time.
    - update the maximum time as max(time,t)
    - iterate through the possible directions:
        - calculate the new row and column by adding the current row and column with nextI[k] and nextJ[k], respectvely.
        - if the new row and new column are within the grid boundaries, and the corresponding cell is a fresh orange and not visited, perform the following steps:
            - push the new coordinates and incremented time (t+1) into the queue.
            - mark the corresponding visited cell as 1.
            - increment the count variable by 1.
- finally, return time if the count is equal to countFresh, indicating that all the fresh oranges have been rotten. Otherwise, return -1.

Time Complexity: O(n*m)</br>
Space Complexity: O(n*m)
