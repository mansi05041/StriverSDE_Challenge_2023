# [Search in BST](https://www.codingninjas.com/studio/problems/search-in-bst_8230841?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
There is a Binary Search Tree(BST) consisting of 'N' nodes. Each node of this BST has some integer data. Given a pointer to the root of this BST, and an integer 'x'. Print true if there is a node in BST having data equals to 'x' otherwise, print false.

## Algorithm
- until the root becomes null check the following points
    - if the root data is equal to x then return true
    - else if the root data is greater than x then move root to left
    - else move root to right
- return false, if x is not found.

Time Complexity: O(n)</br>
Space Complexity: O(1) </br>


