# [Bottom View of Binary Tree](https://www.codingninjas.com/studio/problems/bottom-view-of-binary-tree_8230745?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary Tree of integers. Task is to return the bottom view of the given binary tree.

## Algorithm
- if root is null, then return the empty vector.
- Initialize a queue that store pair of node and its horizontal distance.
- Initialize map that stores the node's data as value with horizontal distance as key.
- Initialize vector to store the nodes that will be observed from Bottom view.
- push the root into queue with 0 as horizontal distance.
- while queue is not empty.
    - remove the front node from queue.
    - Insert the node data with horizontal distance as key into map or update if already exists.
    - if the left child exists, push it into queue with horizontal distance (hd-1).
    - if the right child exists, push it into queue with horizontal distance (hd+1).
- push the all values corresponding to different horizontal distance into the vector and return it.

Time Complexity: O(nlogn)</br>
Space Complexity: O(n)