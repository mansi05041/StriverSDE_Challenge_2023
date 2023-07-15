# [Construct BST from Preorder](https://www.codingninjas.com/studio/problems/construct-bst-from-preorder-traversal_8230850?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a preorder traversal of a binary search tree, task is to find the tree from the given preorder traversal.

## Algorithm

### Brute Force
- Sort the preorder traversal that will give the inorder traversal
- [Construct the binary tree as already solved here](https://github.com/mansi05041/StriverSDE_Challenge_2023/tree/main/ConstructBTfromInorderPreorder)

Time Complexity: O(nlogn)+o(n)</br>
Space Complexity: O(n)

### Better approach
- Given preorder traversal array, initialize i to 0 that track the every element. Call the buildTree funciton and pass the preorder , i and INT_MAX (maximum value allowed) as the bound value.

buildTree function implementation:
- check the base case: if the index i has reached the end of array or the current element at index i is greater than the bound, return NULL
- create a new TreeNode object with the value arr[i] and asign it to the root pointer.
- increment the index i to move to the next element in the array
- Recursively call the buildTree function to build the left subtree with bound as root->data
- Recursively call the buildTree function to build the right subtree with current bound value.
- return the root of constructed binary search tree.

Time Complexity: O(n)</br>
Space Complexity: O(n)