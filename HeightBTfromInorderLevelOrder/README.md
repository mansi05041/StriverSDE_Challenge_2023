# [Height of the Binary Tree from Inorder and Level Order Traversal](https://www.codingninjas.com/studio/problems/height-of-the-binary-tree-from-inorder-and-level-order-traversal_8230730?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents
- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given the Inorder Traversal and Level Order Traversal of a Binary Tree of integers. Your task is to calculate the height of the Binary tree without constructinf it. The height of the binary tree is the number of edges in the longest path from the root node to any leaf node in the tree. 

## Algorithm
- Create a queue to store Node objects. Initialize the maximum height of the tree as 0.
- Create a root node with height 0 and indices representing the entire range of inorder sequence. Push the root node into the queue.
- Create a map to store the indices of elements in the inorder sequence for efficient lookup.
- Iterate over the level order sequence.
    - Extract the front node from the queue.
    - Update the maximum height if necessary.
    - Find the index of the current element in the inorder sequence using the map.
    - if the left subtree exists, create a new node representing the left subtree and push it into the queue.
    - if the right subtree exists, create a new node representing the right subtree and push it into the queue.
- Return the maximum height of the binary tree.

Time Complexity: O(n)</br>
Space Complexity: O(n)