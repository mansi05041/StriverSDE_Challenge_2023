# [Inorder Traversal](https://www.codingninjas.com/studio/problems/inorder-traversal_8230857?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree of 'n' nodes, where the nodes have integer values. Task is to find the in-order traversal of the given binary.

## Algorithm

### Iterative Solution
- Initialize an empty stack and an empty vector to store the inorder traversal.
- set a pointer 'temp' to the root of the binary tree.
- repeat the following steps while temp is not NULL or the stack is not empty.
    - Traverse to the left: while temp is not NULL, push temp onto stack and update temp to its left child.
    - pop the top element from the stack and add its data to the inorder vector.
    - traverse to the right: Set temp to right child of the popped node.
- once all nodes have been processed, return the inorder vector.

Time Complexity: O(n)</br>
Space Complexity: O(n)

### Recursive Solution
```
function getInorderTraversal(vector<int>& inorder, TreeNode* root){
    if(!root) return;
    getInorderTraversal(inorder,root->left);
    inorder.push_back(root->data);
    getInorderTraversal(inorder,root->right);
}
```
Time Complexity: O(n)</br>
Space Complexity: O(h) </br>
<code>h: height of binary tree</code>

