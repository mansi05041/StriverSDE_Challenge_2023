# [M-Coloring Problem](https://www.codingninjas.com/studio/problems/m-coloring-problem_8230777?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given an undirected graph in the form of an adjacency matrix along with an integer M. Task if to tell if you can color the vertices of the graph using at most M colors such that no two adjacent vertices are of the same color.

## Algorithm
- initialize the color vector with size n+1 and call the recursive function that tells if it possible to color.
- In recursive function:
    - Base case: if the current node is equal to n, it means all nodes have been assigned colors, so return true.
    - Iterate through all the possible colors from 1 to m.
        - check if it is safe to assign the color i to the current node by checking the adjacent nodes doesn't have same color.
            - if it is safe then assign the color i to the node.
            - call the recursive function for the next node, if return true then it means a valid coloring has been found.
            - if the above fucntion gives false then it means the current color assignment leads to contradiction. backtrack by reseting the color of the current node to 0.
        - if no valid coloring is found after trying all the colors, return false.
- return the result provided by recursive function.

Time Complexity: O(m<sup>n</sup>)</br>
Space Complexity: O(n)
