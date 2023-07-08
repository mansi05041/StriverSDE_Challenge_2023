# [Is Height Balanced Binary Tree](https://www.codingninjas.com/studio/problems/is-height-balanced-binary-tree_8230771?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree of 'n' nodes, where the nodes have integer values. Task is to check if it is a height-balanced binary tree.

## Algorithm
- The height function calculates the height of a binary tree rooted at the given node. It recursively computes the height of the left and right subtrees and returns the maximum height among them, incremented by 1.
- The isBalancedBT function takes a pointer to the root node of the binary tree and checks whether the tree is height-balanced or not.
- If the root node is 'NULL', it means the tree is empty and an empty tree is considered height-balanced. Hence it returns true.
- The isBalancedBT function recursively calls itself on the left and right subtrees of the current node.
- It checks whether both the left and right subtrees are height balanced by comparing the absolute difference of their heights. If the difference is greater than 1, it means the tree is not balanced, and it returns false.
- otherwise it returns true if the difference is less than or equal to 1.
- If none of the above conditions are met, it returns false, indicating that tree is not balanced.

Time Complexity: O(n<sup>2</sup>)</br>
Space Complexity: O(h)


