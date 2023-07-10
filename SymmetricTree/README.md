# [Symmetric Tree](https://www.codingninjas.com/studio/problems/symmetric-tree_8230686?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree of 'n' nodes, where the data present in each node is an integer. Find whether the given tree is symmetric or not.

## Algorithm
- start with the root node of the binary tree.
- Initialize the global variable "Symmetric" as true
- Call the helper function with the root node twice, passing it as both the left and right subtrees.
- Inside the helper function:
    - if both root1 and root2 are NULL, return
    - if either root1 or root2 is NULL or their data values are different, set symmetric to false and return.
    - Recursively call the helper function with root1's left subtree and root2's right subtree.
- return the value of Symmetric.

Time Complexity: O(n)</br>
Space Complexity: O(h) </br>
<code>h: height of binary tree</code>

