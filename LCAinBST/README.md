# [LCA of Two nodes in a BST](https://www.codingninjas.com/studio/problems/lca-of-two-nodes-in-a-bst_8230778?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Binary Search Tree of distinct integers and two node 'x' and 'y'. Task is to return the LCA (Lowest Common Ancestor) of 'x' and 'y' is the shared ancestor of 'x' and 'y' that is located farthest from the root.

## Algorithm

### Naive approach
- Write the path from root to both node.
- return the common least common shared node's data.

Time Complexity: O(n)</br>
Space Complexity: O(n)

### better approach  (General case for all binary trees)
- check for the base case: if the root is NULL or its data is equal to either 'x' or 'y', return the root.
- Recursively call the helper function on the left and right subtrees.
- Determine the LCA
    - if left is NULL, return 'right' (because both 'x' and 'y' are in the right subtree)
    - if right is NULL, return 'left' (because both 'x' and 'y' are in the left subtree)
    - if neither 'left' nor 'right' is NULL, return the current root.

Time Complexity: O(n)</br>
Space Complexity: O(h) - h is the height of tree

### Optimal approach 
- start with the root of the BST
- if the root is NULL or either x or y is NULL, return NULL
- Retrieve the data value of the current node (root->data)
- if the data value is greater than the both x->data and y->data, it means both x and y lie in the left subtree of the current node. Recursively call the function on the left subtree.
- if the data value is less than the both x->data and y->data, it means both x and y lie in the right subtree of the current node. Recursively call the function on the right subtree.
- If non of the above condition apply, it means the current node is the LCA. return the current node.

Time Complexity: O(logn)</br>
Space Complexity: O(h) - h is the height of tree