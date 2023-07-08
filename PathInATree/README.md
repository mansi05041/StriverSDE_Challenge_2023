# [Path In A Tree](codingninjas.com/studio/problems/path-in-a-tree_8230860?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree of 'n' nodes and a node 'x'. Task is to print the path from the root node to the given node 'x'.

## Algorithm
- if the root is "NULL", return an empty vector
- Create an empty vector called path
- Call the helper function that gives the path
- return the path vector.

The helper function performs the following steps:
- if the current node 'root' is NULL, return false.
- Append the value of root->data to the path vector.
- Recursively call the helper function to the left subtree(root->left) and right subtree(root->right)
    - If either recursive call return 'true', indicating that the node 'x' is found in the subtree, return true.
- Check if the current node's value (root->data) is equal to 'x'. If true, return true.
- Backtrack by removing the last element from the path vector.
- Return false to indicate that the node 'x' was not found in the current subtree.

Time Complexity: O(n)</br>
Space Complexity: O(n) </br>


