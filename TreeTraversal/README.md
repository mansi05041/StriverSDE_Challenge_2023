# [Tree Traversals](https://www.codingninjas.com/studio/problems/tree-traversals_8230775?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary Tree of integers. Task is to find the in-order, Pre-order and post-order traversals of the given binary tree.

## Algorithm
- Initialize three empty vectors: preorder, postorder and inorder.
- call the getPreorder function to get the preorder traversal.
- call the getPostorder function to get the postorder traversal.
- call the getInorder function to get the inorder traversal.
- create a vector of vectors res.
- push the inorder vector into res.
- push the preorder vector into res.
- push the postorder vector into res.
- return res

Time Complexity: O(n)</br>
Space Complexity: O(n)