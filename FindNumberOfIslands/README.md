# [Find Number of Islands](https://www.codingninjas.com/studio/problems/find-number-of-islands_8230692?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a 2-dimensional array having n rows and m columns, which is filled with ones(1) and zeroes(0), <code>1-land, 0-water</code>.
A cell is said to be connected to another cell, if one cell lies immediately next to the other cell, if any of the eight directions. A group of connected cells having value 1 is called an island. Task is to find the number of islands present in the matrix.

## Algorithm
- Create a 2D visited array same size as given input array.
- iterate over each cell in the grid using nested loops.
- if the cell is unvisited, increment the islands by 1 and call the bfs function to perform BFS starting from that cell.
- in bfs function
    - mark the current cell visited
    - create a queue and push the starting cell coordinated into the queue.
    - while the queue is not empty, repeat the following steps
        - dequeue the front element of the queue.
        - traverse all the eight directions and check if the new grid is valid, contains land and are not visited yet. Then push that grid into queue and mark it visited

Time Complexity: O(n*m)</br>
Space Complexity: O(n*m)
