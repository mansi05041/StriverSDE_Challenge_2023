# [BST Iterator](https://www.codingninjas.com/studio/problems/bst-iterator_8230815?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a class named as BSTIterator that represents an iterator over inorder traversal of a binary search tree.
Implement the following:
- BSTIterator(Node root) - it is a parametrized constructor in which you are given the root of the binary search tree. It will be called whenever an object of BSTIterator is created.
- next() - this function will return the next smallest element in the in-order traversal of the binary search tree. 
- hasNext() - This function will return true if there exists the next smallest element in the traversal else it will return false.

## Algorithm
- The BSTiterator class takes a root node of the BST as a parameter and intializes an empty stack.
- The pushAll function is used to push all the left child nodes of the given root node onto the stack.
- In the next function, it retrieves the top node from the stack, pops it and pushes all the left child nodes of the right child of the current node onto the stack.
- The hasNext function checks if the stack is empty or not.

Time Complexity: O(n)</br>
Space Complexity: O(h) - h is the height of BST
