# [Vertical Order Traversal](https://www.codingninjas.com/studio/problems/vertical-order-traversal_8230758?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary Tree of integers. Task is to return the vertical order traversal of the values of the nodes of the given binary tree.

## Algorithm
- Initialize a queue that store pair of node and its horizontal distance.
- Initialize map that stores the vector of nodes with same hd as value with horizontal distance(hd) as key.
- Initialize vector to store the nodes of Vertical Order Traversal.
- push the root into queue with 0 as horizontal distance.
- while queue is not empty.
    - remove the front node from queue.
    - Push the node data into vector with horizontal distance as key into map.
    - if the left child exists, push it into queue with horizontal distance (hd-1).
    - if the right child exists, push it into queue with horizontal distance (hd+1).
- Push the all nodes values corresponding to different horizontal distance into the vector and return it.

Time Complexity: O(nlogn)</br>
Space Complexity: O(n)