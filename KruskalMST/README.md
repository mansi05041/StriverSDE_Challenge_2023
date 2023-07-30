# [Kruskal's Minimum Spanning Tree Algorithm](https://www.codingninjas.com/studio/problems/kruskal-s-minimum-spanning-tree-algorithm_8230804?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given an undirected connected weighted graph having 'n' nodes numbered 1 to N. Given an array 'edges' of size 'm', containing the details of the edges of the graph. You are supposed to return the weight of minimum spanning tree.

## Algorithm
- Sort the according to the weights in ascending order.
- Initialize an instance of DisjointSet.
- Iterate to the edges
    - Check if using that edge result in cycle then eliminate it, otherwise add the weight into result.
- return result.

Time Complexity: O(m logm)</br>
Space Complexity: O(n+m) </br>
<code>n: vertices, m: edges</code>

