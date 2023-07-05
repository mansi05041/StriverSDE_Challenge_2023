# [Diameter of Binary Tree](https://www.codingninjas.com/studio/problems/diameter-of-binary-tree_8230762?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary Tree of integers. Task is to return the length of the diameter of the tree.

## Algorithm
- Intialize diameter as 0.
- Call the Function that calculates the diameter of binary tree using the concept of height.
- return the diameter

- The functionality of GetDiameter function:
    - base case: if root is null, return 0
    - get the height for left subtree by calling recursive function GetDiameter with root->left.
    - get the height for right subtree by calling recursive function GetDiameter with root->right.
    - update the diameter as max(diameter,HeightLeftSubtree+ HeightRightSubtree)
    - return the height as 1+max(HeightLeftSubtree,RightSubtree)

Time Complexity: O(n)</br>
Space Complexity: O(h) - h is the height of tree