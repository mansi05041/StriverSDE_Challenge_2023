# [Construct Binary Trees from Postorder and Inorder Binary Traversal](https://www.codingninjas.com/studio/problems/construct-binary-tree-from-inorder-and-postorder-traversal_8230837?challengeSlug=striver-sde-challenge&leftPanelTab=1)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given the postorder and inorder traversal of a binary tree. Your task is to construct a binary tree using the given inorder and postorder traversals.

## Algorithm
- check the base case: start>end then return NULL
- create a new TreeNode with the value at the current index in the postorder sequence, postorder[idx] and decrement the index.
- Find the index of root value in the inorder sequence using map.
- Similarly recursively construct the right subtree by calling the 'helper' function with the updated indices.
- Recursively construct the left subtree by calling the 'helper' function with the updated indices.
- return the constructed root node.

Time Complexity: O(n)</br>
Space Complexity: O(n)