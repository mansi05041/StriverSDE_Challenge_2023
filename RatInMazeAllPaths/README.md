# [Rat in a Maze all Paths](https://www.codingninjas.com/studio/problems/rat-in-a-maze-all-paths_8230705?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a nxn maze with a rat placed at maze[0][0]. Find and print all the paths that rat can follow to reach its destination maze[n-1][n-1]. Rat can move in any direction (left,right,up and down). value of every cell in the maze can either be 0 or 1. Cells with value 0 are blocked means that rat cannot enter into those cells and those with value 1 are open.

## Algorithm
- create an empty 2d vector visited of size nXn to keep the track of visited cells in the maze.
- create an empty 2d vector 'ans' to store solution paths.
- call the recursive function with starting position (0,0).
- In recursive function:
    - check if the current position is the target position (n-1,n-1), if yes mark the current cell as visited, store the visited matrix in the ans and return.
    - mark the current cell as visited.
    - iterate over all the possible movements from the current cell(up,right,down and left).
    - check if the new position is within the valid range, unvisited and reachable. if yes, call the recursive fucntion with the new position.
    - Backtrack by making the current cell as unvisited.
- return the ans containing all the valid paths found.

Time Complexity : O(3<sup>n<sup>2</sup></sup>)</br>
Space Complexity : O(n<sup>2</sup>)
