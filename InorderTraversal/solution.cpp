
vector<int> getInOrderTraversal(TreeNode* root){
    stack<TreeNode*> st;
    vector<int> inorder;
    TreeNode* temp = root;

    while(temp!=NULL || !st.empty()){

        // traverse to left
        while(temp){
            st.push(temp);
            temp = temp->left;
        }

        temp = st.top();
        st.pop();
        inorder.push_back(temp->data);

        // traversal to right
        temp = temp->right;
    }

    return inorder;
}