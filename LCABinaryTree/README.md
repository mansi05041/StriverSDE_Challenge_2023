# [LCA of Binary Tree](https://www.codingninjas.com/studio/problems/lca-of-binary-tree_8230760?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Binary Tree of distinct integers and two node 'x' and 'y'. Task is to return the LCA (Lowest Common Ancestor) of 'x' and 'y' in the binary tree is the shared ancestor of 'x' and 'y' that is located farthest from the root.

## Algorithm

### Naive approach
- Write the path from root to both node.
- return the common least common shared node's data.

Time Complexity: O(n)</br>
Space Complexity: O(n)


### better approach 
- check for the base case: if the root is NULL or its data is equal to either 'x' or 'y', return the root.
- Recursively call the helper function on the left and right subtrees.
- Determine the LCA
    - if left is NULL, return 'right' (because both 'x' and 'y' are in the right subtree)
    - if right is NULL, return 'left' (because both 'x' and 'y' are in the left subtree)
    - if neither 'left' nor 'right' is NULL, return the current root.

Time Complexity: O(n)</br>
Space Complexity: O(h) - h is the height of tree