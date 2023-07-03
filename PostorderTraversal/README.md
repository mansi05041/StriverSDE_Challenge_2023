# [Postorder Traversal](https://www.codingninjas.com/studio/problems/postorder-traversal_8230858?challengeSlug=striver-sde-challenge&leftPanelTab=0)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
Given a binary tree of 'n' nodes, where the nodes have integer values. Task is to find the postorder traversal of the given binary.

## Algorithm

### Iterative Solution
- Initialize an empty stack and an empty vector to store the postorder traversal.
- set a pointer 'temp' to the root of the binary tree.
- if 'temp' is NULL, return an empty vector.
- push temp onto the stack.
- repeat the following steps while the stack is not empty.
    - Assign temp as the top element of the stack and pop it.
    - Append temp->data to the postorder vector.
    - If temp has a left child, push it onto the stack
    - If temp has a right child, push it onto the stack.
- reverse the postorder vector
- return the postorder vector.

Time Complexity: O(n)</br>
Space Complexity: O(n)

### Recursive Solution
```
function getPostorderTraversal(vector<int>& postorder, TreeNode* root){
    if(!root) return;
    getPostorderTraversal(postorder,root->left);
    getPostorderTraversal(postorder,root->right);
    postorder.push_back(root->data);
}
```

Time Complexity: O(n)</br>
Space Complexity: O(h) </br>
<code>h: height of binary tree</code>

