# [Top View of Binary Tree](https://www.codingninjas.com/studio/problems/top-view-of-binary-tree_8230721?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary Tree of integers. Task is to return the top view of the given binary tree.

## Algorithm
- if root is null, then return the empty vector.
- Initialize a queue that store pair of node and its horizontal distance.
- Initialize map that stores the node's data as value with horizontal distance as key.
- Initialize vector to store the nodes that will be observed from Top view.
- push the root into queue with 0 as horizontal distance.
- while queue is not empty.
    - remove the front node from queue.
    - check if the horizontal distance is already not present in map, if so then add it into map.
    - if the left child exists, push it into queue with horizontal distance (hd-1).
    - if the right child exists, push it into queue with horizontal distance (hd+1).
- push the all values corresponding to different horizontal distance into the vector and return it.

Time Complexity: O(nlogn)</br>
Space Complexity: O(n)