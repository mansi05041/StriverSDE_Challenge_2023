vector<int> getPreorderTraversal(TreeNode* root){
    vector<int> preorder;
    stack<TreeNode*> st;
    TreeNode* temp = root;

    if(temp==NULL) return{};

    // push the root into the stack
    st.push(root);

    while(!st.empty()){
        temp = st.top();
        st.pop();
        preorder.push_back(temp->data);

        // traverse to the right
        if(temp->right) st.push(temp->right);

        // traverse to the left
        if(temp->left) st.push(temp->left);
    }

    return preorder;
}