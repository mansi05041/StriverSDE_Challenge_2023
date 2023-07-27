# [Prime's MST](https://www.codingninjas.com/studio/problems/prim-s-mst_8230809?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given an undirected connected weighted graph having 'n' nodes numbered 1 to N. A matrix 'E' of size M X 2 is given which represents the 'M' edges such there is an edge directed from node E[i][0] to node E[i][1]. You are supposed to return the minimum spanning tree where you need to return weight for each edge in the MST. 

## Algorithm
- Create an adjacency list representation of the graph.
- Initialize a priority queue to store edges with their weights. Start with the source node and weight 0.
- Create a visited array to keep track of nodes that have been visited so far.
- Create an empty list to store the MST edges and their weights.
- While the priority queue is not empty:
    - Pop the edge with the minimum weight from the priority queue.
    - If the destination node of the popped edge is already visited, continue to next iteration.
    - Mark the destination node as visited.
    - If the destination node has a parent(not a source node), add the edge and its weight to the MST list.
    - Iterate through all the adjacent nodes of the destination node and add the edges with unvisited nodes to the priority queue.
- Return the MST list

Time Complexity: O(m logm)</br>
Space Complexity: O(n+m) </br>
<code>n: vertices, m: edges</code>

