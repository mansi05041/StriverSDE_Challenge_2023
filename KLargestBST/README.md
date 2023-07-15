# [Kth largest Number BST](https://www.codingninjas.com/studio/problems/k-th-largest-number-bst_8230750?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary search tree of integers with N nodes. Task is to return the kth largest element of the BST. If there is no kth largest element in the BST, return -1.

## Algorithm

### Brute force
- Get the inorder traversal
- Return the kth largest element from the inorder traversal as it is sorted for BST

Time Complexity: O(n)</br>
Space Complexity: O(n)

### Better approach
- Initialize ans = -1
- call the helper function passing root, k and ans
- return ans

Implementation of helper function
- check the base case: if the root is NULL, return
- Recursively move to the right subtree by calling helper(root->right,k,ans)
- Decrement the value of k by 1
- check if k becomes 0, if yes assign the ans = root->data and return
- Recursively move to the left subtree by calling helper(root->left,k,ans)

Time Complexity: O(n)</br>
Space Complexity: O(n)
