# [Children Sum Property](https://www.codingninjas.com/studio/problems/children-sum-property_8230711?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree of nodes 'N', need to modify the value of its nodes, such that the tree holds the children sum property. A binary tree is said to follow the children sum property if, for every node of that tree, the value of the node is equal to the sum of the value(s) of all its children nodes.

## Algorithm
- For each node in the binary tree, calculate the sum of the data values of its left and right child nodes (if they exist).
- If the calculated sum is greater than or equal to the data value of the current node, update the data value of the current node to be the sum.
- If the data value of the current node is greater than the calculated sum, update the data values of both left and right child nodes(if they exist) to be the data value of the current node.
- Recursively apply the above steps to the left and right subtrees of the current node.
- At the end of the recursion, calculate the total sum of the data values of the left and right child nodes(if they exist) and update the data value of the current node to be the sum.

Time Complexity: O(n) </br>
Space Complexity: O(h) - h is the height of tree