# [Convert a given binary tree to doubly linked list](https://www.codingninjas.com/studio/problems/convert-a-given-binary-tree-to-doubly-linked-list_8230744?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents
- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a Binary tree, convert this binary tree to a doubly linked list.

## Algorithm
- The 'convertToDLL' function takes three parameters: the root of the current subtree, the head of DLL and the prev pointer to keep track of the previous node in the DLL
- If the root is NULL, return
- Recursively call the function on the left subtree
- Update the right pointer of the prev node to the current root node.
- update the left pointer of the current root node to prev.
- update prev to the current root node.
- Recursively call the function on the right subtree.

Time Complexity: O(n)</br>
Space Complexity: O(h)