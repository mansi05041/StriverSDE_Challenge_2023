# [Partial BST](https://www.codingninjas.com/studio/problems/partial-bst_8230723?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree of 'n' nodes, check if that input tree is partial BST or not, if yes, return true, return false otherwise.

## Algorithm
- call the helper function and pass the root with minimum value as INT_MIN and maximum value as INT_MAX

The helper function performs the following steps:
- if the current node 'root' is NULL, return true.
- if the node value is out of range then return false.
- recursively check for left and right subtrees with updated range.

Time Complexity: O(n)</br>
Space Complexity: O(n) </br>


