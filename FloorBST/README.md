# [Floor in BST](https://www.codingninjas.com/studio/problems/floor-in-bst_8230753?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents
- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a BST (Binary search tree) with N number of nodes and a value 'X'. Task is to find the greatest value node of the BST which is smaller than or equal to 'X'.

## Algorithm
- Initialize a variable 'ans' = INT_MIN
- Start iterating from the root node of the BST.
    - If the value of the current node is equal to X, update ans with the current node's value and break the loop.
    - If the value of the current node is greater than X, move to the left child of the current node.
    - If the value of the current node is less than X, update ans as <code>max(ans,root->val)</code> and move to the right child of the current node.
- Return the ans, which represents the floor value of X in the BST.

Time Complexity: O(n)</br>
Space Complexity: O(1)