# [Size of Largest BST in Binary Tree](https://www.codingninjas.com/studio/problems/size-of-largest-bst-in-binary-tree_8230743?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree with N nodes. Task is to return the size of the largest subtree of the binary tree which is also a BST.

## Algorithm
- The helper function is a recursive function that takes a TreeNode as input and returns a Node object containing information about the largest BST within the subtree rooted at the given node.
- If the given node is NULL (i.e., the base case), it returns a Node object with size 0, the maximum and minimum values set to INT_MAX, INT_MIN, respectively.
- It recursively calls the helper function on the left and right subtrees.
- If the left and right subtrees are BSTs, and the current's node value is greater than the maximum value in the left subtree and less than the minimum value in the right subtree, then it forms a new BST.
- If a new BST is formed, it returns a Node object with the size as <code>left.size + right.size + 1</code>. The minimum and maximum values are updated accordingly.
- If a new BST is not formed, it returns a Node object with the size as the maximum of the sizes of the left and right subtrees and sets minimum and maximum values to INT_MIN and INT_MAX respectively.

Time Complexity: O(n)</br>
Space Complexity: O(logn) 


