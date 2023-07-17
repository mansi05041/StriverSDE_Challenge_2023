# [BFS in Graph](https://www.codingninjas.com/studio/problems/bfs-in-graph_8230763?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given an undirected and disconnected graph G(V,E), containing V vertices and E edges. Print its BFS traversal starting from the 0th vertex.</br>
Note:<strong>The Graph may not be connected i.e. there may exist multiple components in a graph</strong>

## Algorithm
- Create an empty result vector res to store the connected components.
- Create a visited array of size 'V' and initialize all elements to 0, indication theat no node has been visited yet.
- Create an adjacency list 'adj' to represent the graph, using the provided edges. Sort the adjacency lost for each node in ascending order.
- Iterate over all nodes from 0 to V-1
    - If the node has not been visited, perform the following steps:
        - perform bfs on current node
        - update the res vector
- Return the res vector containing BFS traversal order.

Time Complexity: O(V+E)</br>
Space Complexity: O(V+E) </br>
<code>V: vertices , E: edges </code>