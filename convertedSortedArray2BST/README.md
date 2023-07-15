# [Convert Sorted Array to BST](https://www.codingninjas.com/studio/problems/convert-sorted-array-to-bst_8230836?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Sorted array of length 'N'. You need to construct a balanced binary search tree from the array. If there can be more than one possible tree, then you can return array.

## Algorithm
- check the base case: start>end then return NULL
- Find the middle index of the given array
- create a new TreeNode with the value at the middle index in the given array.
- Recursively construct the left subtree by calling the 'helper' function with the updated indices.
- Similarly recursively construct the right subtree by calling the 'helper' function with the updated indices.
- return the constructed root node.

Time Complexity: O(n)</br>
Space Complexity: O(logn)