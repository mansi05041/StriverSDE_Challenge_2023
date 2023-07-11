# [Boundary Traversal of Binary Tree](https://www.codingninjas.com/studio/problems/boundary-traversal-of-binary-tree_8230712?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree of 'n' nodes, where the nodes have integer values. Task is to print the boundary nodes of the binary tree in Anti-clockwise direction starting from the root node.

## Algorithm
- Traverse the left boundary of the tree (excluding the leaf nodes) from top to bottom.
- Traverse all the leaf nodes of the tree from left to right.
- Traverse the right boundary of the tree (excluding the right nodes) from bottom to top.

Time Complexity: O(n)</br>
Space Complexity: O(n)
