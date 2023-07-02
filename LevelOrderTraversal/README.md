# [Level Order Traversal](https://www.codingninjas.com/studio/problems/level-order-traversal_8230716?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary Tree of integers. Task is to return the level order traversal of the given tree.

## Algorithm
- if root is null, then return.
- Initialize a queue that store nodes.
- Initialize vector to store the level traversal.
- push the root into queue.
- while queue is not empty
    - remove the front node from queue.
    - push the value of removed node into level vector.
    - if the left child exists, push it into queue.
    - if the right child exists, push it into queue.
- return level order traversal

Time Complexity: O(n)</br>
Space Complexity: O(n)