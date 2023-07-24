# [Pair Sum in BST](https://www.codingninjas.com/studio/problems/pair-sum-in-bst_8230756?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary search tree and a target value 'k'. Task id to check if there exists two unique elements in the given BST such that their sum is equal to the given target 'k'.

## Algorithm
- Create a queue to perform level order traversal of the BST. 
- Create an unordered map to store the count of each node's value encountered during the traversal.
- Push the root into the queue.
- While the queue is not empty, do the following:
    - Dequeue a node from the front of the queue.
    - Increment the count of node's value in the unordered map.
    - Check if the complement of the current node's value (ie., k-node->data) exists in the map, if it does, then a pair with sum k is found, and we return true.
    - Push the left child of the node into the queue if it exists.
    - Push the right child of the node into the queue if it exists.
- If the loop completes without finding a pair with sum k, return false.

Time Complexity: O(n)</br>
Space Complexity: O(n) </br>


