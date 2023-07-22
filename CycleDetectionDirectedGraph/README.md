# [Cycle Detection in Directed Graph](https://www.codingninjas.com/studio/problems/detect-cycle-in-a-directed-graph_8230794?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents
- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given an Directed graph with N vertices and M edges. The vertices are labelled from 1 to N. The task is to find if the graph contains a cycle or not.
A path that starts from a given vertex and ends at the same vertex traversing the edges only once is called a cycle.

## Algorithm
- Calculate the indegree of each node by iterating through the edges and counting the number of incoming edges for each node.
- Create an adjacency list representation of the directed graph using the given edges.
- Initialize a count variable to track the number of components(strongly connected components) in the graph.
- Push all the nodes with an indegree of 0 into a queue.
    - For each node removed from the queue, increment the count variable to mark the current component.
    - Iterate through all the adjacent nodes of the current node.
    - For each adjacent node, decrement its indegree by 1.
    - If the indegree of an adjacent node becomes 0, push it into the queue.
- After the BFS, check if the count of components is equal to the total number of nodes in the graph(n)
    - If they are equal, return false indicating there is no cycle.
    - If they are not equal, return true indicating there is a cycle (DAG)

Time Complexity: O(n+E)</br>
Space Complexity: O(n+E)