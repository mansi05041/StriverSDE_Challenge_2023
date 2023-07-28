# [Strongly Connected Components](https://www.codingninjas.com/studio/problems/strongly-connected-components-tarjan-s-algorithm_8230789?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given an unweighted directed graph of 'V' vertices and 'E' edges. Task is to print all strongly connected components present in the graph

## Algorithm
- Initialize a visited vector and adjacency list.
- Sort all the edges according to finish time, perform dfs and store the nodes into stack according to time.
- Reverse the edges and store in adjT
- set the visited vector to 0 for all nodes
- Perform the dfs in order of stack elements to find the strongly connected components.
- return the result obtained.

Time Complexity: O(V+E) </br>
Space Complexity: O(V+E)
