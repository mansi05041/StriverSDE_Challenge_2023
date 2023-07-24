# [Floyd Warshall](https://www.codingninjas.com/studio/problems/floyd-warshall_8230846?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents
- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a directed weighted graph of 'N' vertices labeled from 1 to N vertices and M edges. Each edge connecting two nodes 'u' and 'v' has a weight 'w' denoting the distance between them. Task is to find the length of the shortest path between the 'src' and 'dest' vertex given to you in the graph using Flloyd warshall's algorithm. The graph may contain negatively weighted edges.

## Algorithm
- create a 2D matrix with the size nXn and intialize all elements to a large value(1e9 in this case) to represent infinity.
- Set the diagonal elements of the matrix to 0.
- Update the matrix with the given edge weights from the edges vector. The indices are adjusted by subtracting 1 to fit the 0-based indexing.
- Apply the Floyd-Warshall algorithm by considering all possible intermediate vertices 'via'. For each pair of vertices(i,j), check if going through vertex 'via' reduces the distance. If it does, update the distance accordingly.
- The shortest path from source to destination will be stored in matrix[src-1][dest-1], again adjusted for 0-based indexing.

Time Complexity: O(n<sup>3</sup>)</br>
Space Complexity: O(n<sup>2</sup>)