# [Invert a Binary Tree](https://www.codingninjas.com/studio/problems/invert-a-binary-tree_8230838?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree and one of its leaf nodes. you have to invert this binary tree. Inversion must be done by following all the below guidelines:
- The given leaf node becomes the root after the inversion.
- For a node (say X)
    - if there exists the left child that is not yet taken then this child must become the right child of 'x'
    - if the left child is already taken then the right child is still on the right side of 'x'
- The parent of 'x' must be left child of 'x' 

## Algorithm
- Base Case: if root is null, return null
- Store the path from root to leaf in the stack.
- pop the top node from stack and mark it as newRoot.
- initialize a variable named parent with the value same as newRoot
- Repeat the following steps until the stack is not empty
    - take the current node from stack and pop it.
    - check if the curr->right is equal to parent 
        - then move its left child on the right side
        - set the left child as NULL
    - otherwise, check if the curr->left is equal to parent
        - set the left child as NULL
    - set parent->left as curr (current node)
    - update parent as curr
- return the newRoot

Time Complexity: O(n)</br>
Space Complexity: O(n) </br>


