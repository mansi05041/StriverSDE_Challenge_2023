# [Left View of a binary Tree](https://www.codingninjas.com/studio/problems/left-view-of-a-binary-tree_8230757?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary Tree of integers. Task is to return the left view of the binary tree.

## Algorithm
- if root is null, then return.
- check if the current level is greater than the maximum level visited so far. If it is, add the value of current node to leftView traversal array and update the maxLevel.
- Call the recursive function for the left child with updated level as level+1.
- Call the recursive function for the right child with updated level as level+1

Time Complexity: O(n)</br>
Space Complexity: O(h) - h is the height of the tree.