# [Maximum Path Sum Between Two Leaves in Binary Tree](https://www.codingninjas.com/studio/problems/maximum-path-sum-between-two-leaves_8230713?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree of 'n' nodes, where each node has a non-negative integer value. Return the maximum possible sum of path between any two leaves of the given tree. The path is also inclusive of the leaf nodes and the maximum path sum may or may not go through the root of the given tree.
If there is only one leaf node in the tree, then return -1.

## Algorithm
- Handle the edge case where thee root is null. In this case, return -1 as an indication of an empty tree.
- Initialize a variable 'maxPathSum' to -1 to store the maximum path sum.
- Call the helper function with the root and 'maxPathSum' as parameters.
- Return the 'maxPathSum' as the result.

Helper function implementation :
- Check if the current node 'root' is null. If so, return INT_MIN as there are no values in this subtree.
- Check if the current node is a leaf node. If so, return the value of the leaf node.
- Recursively call the helper function for the left and right subtrees, and store their return values in 'leftSum' and 'rightSum'.
- Update the 'maxi' variable with the maximum path sum found so far, considering the current node value.
- Return the path sum of the current node(value+max(leftSum,rightSum))

Time Complexity: O(n)</br>
Space Complexity: O(n) </br>


