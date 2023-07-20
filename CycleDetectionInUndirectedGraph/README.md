# [Cycle Detection in Undirected Graph](https://www.codingninjas.com/studio/problems/cycle-detection-in-undirected-graph_8230798?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents
- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given an undirected graph with N vertices and M edges. The vertices are labelled from 1 to N. The task is to find if the graph contains a cycle or not.
A path that starts from a given vertex and ends at the same vertex traversing the edges only once is called a cycle.

## Algorithm
- The 'cycleDetection' function iterates through all vertices of the graph and calls the 'isCycle' function for each unvisited vertex. If any of these function calls return true, it means a cycle is present in the graph, and it returns "Yes". Otherwise, it return "No", indicating no cycle is present.

Implementation of isCycle function
- It is a recursive DFS function that checks for cycles in a connected component of the graph. It marks the current node as visited and then iterates through all its neighbors.
- If a neighbor is not visited, it recursively calls the 'isCycle' function for that neighbor with the current node as its parent. The recursive call explores the connected component of that neighbor.
- If a neighbor is already visited and its not the parent node (back-edge), then a cycle is detected, and the function return true.
- If the 'isCycle' function doesn't find any cycle, it returns false.

Time Complexity: O(V+E)</br>
Space Complexity: O(V+E)