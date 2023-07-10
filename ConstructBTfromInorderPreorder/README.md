# [Construct Binary Trees from Preorder and Inorder Binary Traversal](https://www.codingninjas.com/studio/problems/construct-binary-tree-from-inorder-and-preorder-traversal_8230759?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given the preorder and inorder traversal of a binary tree. Your task is to construct a binary tree using the given inorder and preorder traversals.

## Algorithm
- check the base case: start>end then return NULL
- create a new TreeNode with the value at the current index in the preorder sequence, preorder[idx] and increment the index.
- Find the index of root value in the inorder sequence using map.
- Recursively construct the left subtree by calling the 'helper' function with the updated indices.
- Similarly recursively construct the right subtree by calling the 'helper' function with the updated indices.
- return the constructed root node.

Time Complexity: O(n)</br>
Space Complexity: O(n)