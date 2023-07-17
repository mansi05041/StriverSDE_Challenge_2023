# [Dfs Traversal](https://www.codingninjas.com/studio/problems/dfs-traversal_8230690?challengeSlug=striver-sde-challenge)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given an undirected and disconnected graph G(V,E), containing V vertices and E edges. Print its DFS traversal.</br>
Note:<strong>The Graph may not be connected i.e. there may exist multiple components in a graph</strong>

## Algorithm
- Create an empty result vector res to store the connected components.
- Create a visited array of size 'V' and initialize all elements to 0, indication theat no node has been visited yet.
- Create an adjacency list 'adj' to represent the graph, using the provided edges.
- Iterate over all nodes from 0 to V-1
    - If the node has not been visited, perform the following steps:
        - Create an empty temporary vector 'temp' to store the nodes in the current component.
        - perform dfs on current node
        - append temp to res to store the connected component.
- Return the res vector containing all connected components.

Time Complexity: O(V+E)</br>
Space Complexity: O(V+E) </br>
<code>V: vertices , E: edges </code>