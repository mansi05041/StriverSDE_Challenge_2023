# [Check Bipartite Graph](https://www.codingninjas.com/studio/problems/check-bipartite-graph_8230761?challengeSlug=striver-sde-challenge&leftPanelTab=0s)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a graph, check whether the graph is bipartite or not. Your function should return true if the given graph's vertices can be divided into two independent sets, 'U' and 'V' such that every edge ('u','v') either connects a vertex from 'U' to 'V' or a vertex from 'V' to 'U'.
Given a 2D array 'edges' which contains 0 and 1, where edges[i][j] = 1 denotes a bidirectional edge from 'i' to 'j'.

## Algorithm
- Start with an empty 'color' array to keep track of the color of each node. Initialize all elements of the color array to -1, indicating that no color is colored yet.
- For each node in the graph (handle disconnected components):
    - If the node is not colored yet, perform BFS from that node.
    - Use a queue to perform BFS. Start by pushing the current node into the queue and color it with color 0.
        - While the queue is not empty, dequeue a node from the front of the queue.
        - For each unvisited neighbor of the dequeued node, color it with the opposite color of its parent (if not already colored).
        - If a neighbor is already colored and has the same color ad its parent node, return false, indicating the graph is not bipartite.
- Return true, indicating the graph is bipartite.

Time Complexity: O(n+m)</br>
Space Complexity: O(n) </br>
<code>n: number of nodes </br>
m: number of edges </code>