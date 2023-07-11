# [Maximum Width in Binary Tree](https://www.codingninjas.com/studio/problems/maximum-width-in-binary-tree_8230710?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree of 'n' nodes, where the nodes have integer values. Task is to return the maximum width of the Binary Tree. The width of one level is defined as the length between the leftmost and the rightmost.

## Algorithm
- If the root is NULL, return 0 as the width is zero.
- Create a queue to perform a level order traversal of the binary tree.
- Intialize a variable width to keep track of the maximum width encountered so far. Set it to 0 initially.
- Enqueue the root node into the queue.
- While the queue is not empty, do the following:
    - Get the size of the current level by accessing the queue's size (Qsize)
    - Update the width if the current Qsize is greater than the previous width.
    - Process all the nodes in the current level:
        - Dequeue the front node from the queue.
        - if the left child of the dequeued node exists, enqueue it into the queue.
        - If the right child of the dequeued node exists, enqueue it into the queue.
- After the while loop ends, return the maximum 'width' obtained.

Time Complexity: O(n)</br>
Space Complexity: O(m) </br>
<code>m: maximum number of nodes at any level in the binary tree</code>

