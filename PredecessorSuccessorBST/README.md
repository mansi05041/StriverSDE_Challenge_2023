# [Predecessor And Successor in BST](https://www.codingninjas.com/studio/problems/predecessor-and-successor-in-bst_8230742?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
There is a Binary Search Tree(BST) consisting of 'N' nodes. You are also given 'key' which represents data of a node of this tree. Task is to find the predecessor and successor of the given node in the BST.

## Algorithm

### Brute Force
- Get the inorder traversal of the given binary tree.
- Using binary search find the predecessor and Successor of the given key.
- if the predecessor or successor not found then return -1

Time Complexity: O(n)</br>
Space Complexity: O(n) </br>

### Better approach
- Start with the root of the binary search tree.
- Initialize the predecessor (pre) and successor (suc) variable as -1.
- While the root is not null, do the following:
    - If the key is less than or equal to the current node's data, move to the left subtree
        - update the successor (suc) to the current node's data
        - move to the left child
    - If the key is greater than the current's data, move to the right subtree
        - update the predecessor (pre) to the current node's data
        - move to the right child
- Return the pair (pre,suc) as the predecessor and successor respectively.

Time Complexity: O(h) - h is the height of the binary tree</br>
Space Complexity: O(1) </br>


