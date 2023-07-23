# [Bellman Ford](https://www.codingninjas.com/studio/problems/bfs-in-graph_8230763?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a directed weighted graph of 'N' vertices labeled from 1 to N and M edges. Each edge connecting two nodes 'u' and 'v' has a weight 'w' denoting the distance between them. Task is to find the length of the shortest path between src and dest vertex given. The graph may contain negatively weighted edges.

## Algorithm
- Initialize an array 'dist' of size n+1 and set all elements to a large value(1e9). This array will store the shortest distances from the source node to all other nodes in the graph.
- Set the distance source node to 0 in the dist array.
- Relax all the edges n-1 times. In each iteration, go through all the edges and update the distance of the destination node if a shorter path is found through the current source node and the weight of the edge.
- After relaxing all edges n-1 times, check for the presence of a negative weight cycle. Go through all the edges aagin, and if any disturbance can be further minimized, it indicates the presence of a negative cycle in the graph.
- If a negative cycle is found, return -1 to indicate that the grpah contains negative cycles.
- If no negative cycle is found, the dist array contains the shortest distance from the source node to all other nodes, and the function returns the shortest distance from the source to the destination node.

Time Complexity: O(n*m)</br>
Space Complexity: O(n+m) </br>
<code>n: vertices , m: edges </code>
