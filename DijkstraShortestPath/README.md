# [Dijkstra's shortest path](https://www.codingninjas.com/studio/problems/dijkstra-s-shortest-path_8230755?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given an undirected graph of V vertices and E edges. Each edge connecting two nodes will have a weight denoting the distance between node 'x' and 'y'. Task is to find the shortest path distance from the source node.

## Algorithm
- Create a min heap(priority queue) to store nodes and their distances from the source node.
- Initialize a distance array 'dist' with a value of INT_MAX for all nodes except the source node. Set the distance of the source node to 0 and push it into the min heap.
- Create an adjacency list from the given input 'vec', representing the weighted graph.
- While the min heap is not empty, repeat the following steps:
    - Extract the node with the minimum distance from the min heap.
    - For adjacent node of the extracted node, update its distance if a shorter path is found, then push it into the min heap.

Time Complexity: O((V+E)*logV)</br>
Space Complexity: O(V+E) 