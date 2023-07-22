# [Clone Graph](https://www.codingninjas.com/studio/problems/clone-graph_8230812?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a reference of a node in a connected undirected graph containing N nodes and M edges. You are supposed to return a clone of the given graph which is nothing but a deep copy. Each node in the graph contains an integer "data" and an array of array/list of its neighbours. </br>
The structure of the graphNode class is as follows:
```
class graphNode{
    public:
    int data;
    vector<graphNode*> neighbours;
};
```

## Algorithm
- Create a copy of the input node and mark it visited
- Iterate through the neighbors of the input node:
    - If the neighbor is not visited yet, create a copy of it and add to the neighbors list of the copy of the input node.
    - Recursively call the DFS function on the neighbor and its copy.
    - If the neighbor is already visited, add the corresponding copy from the visited vector to the neighbors list of the copy of the input node.

Time Complexity: O(n+m)</br>
Space Complexity: O(n) </br>
<code>n: number of nodes </br>
m: number of edges </code>