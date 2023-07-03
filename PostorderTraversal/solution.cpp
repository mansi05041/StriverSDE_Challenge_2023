#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

vector<int> getPreorderTraversal(TreeNode* root){
    vector<int> postOrder;
    stack<TreeNode*> st;
    TreeNode* temp = root;

    if(temp==NULL) return {};

    st.push(root);
    while(!st.empty()){
        temp = st.top();
        st.pop();

        postOrder.push_back(temp->data);
        // push the left child
        if(temp->left) st.push(temp->left);
        // push the right child
        if(temp->right) st.push(temp->right);
    }
    reverse(postOrder.begin(),postOrder.end());
    return postOrder;
}