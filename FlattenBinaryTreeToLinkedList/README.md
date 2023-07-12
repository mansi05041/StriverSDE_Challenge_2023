# [Flatten Binary Tree to linked list](https://www.codingninjas.com/studio/problems/flatten-binary-tree-to-linked-list_8230817?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents
- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree consisting of integer values. Your task is to convert the given binary tree into a linked list where the nodes of the linked list follow the same order as the pre-order traversal of the given binary tree.

## Algorithm

### Recursive Solution
- Initialize prev = NULL and call the helper function to flatten the binary tree.
- helper function implementation
    - Base case: if the current node is NULL then return
    - Recursively flatten the right subtree by calling helper(root->right,prev)
    - Recursively flatten the left subtree by calling helper(root->left,prev)
    - set the right pointer of the current node to prev
    - set the left pointer of the current node to NULL
    - update the prev pointer to the current node
- Return prev pointer

Time Complexity: O(n)</br>
Space Complexity: O(h) - h is the height of the binary tree

### Iterative Solution
- create an empty stack
- push the root node onto the stack
- while the stack is not empty
    - pop the top node from the stack and assign it to the variable 'node'
    - push the right child of node onto the stack if it exists
    - push the left child of node onto the stack if it exists
    - if the stack is not empty, set the right pointer of node to the top element of the stack.
    - set the left pointer of the node to NULL
- return the root node

Time Complexity: O(n)</br>
Space Complexity: O(n)