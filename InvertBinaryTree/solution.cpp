// function to store the path from root to leaf
bool helper(TreeNode<int>* root,TreeNode<int>* leaf,stack<TreeNode<int>*>& st){
    st.push(root);

    // if it is a leaf node
    if(!root->left && !root->right){
        if(root->data == leaf->data) return true;
        else{
            st.pop();
            return false;
        }
    }

    // explore the path towards left
    if(root->left){
        if(helper(root->left,leaf,st)) return true;
    }

    // explore the path towards right
    if(root->right){
        if(helper(root->right,leaf,st)) return true;
    }

    // backtrack to explore other options
    st.pop();
    return false;
}

TreeNode<int>* invertBinaryTree(TreeNode<int>* root,TreeNode<int>* leaf){
    // edge case
    if(!root) return NULL;

    stack<TreeNode<int>*> st;
    helper(root,leaf,st);
    TreeNode<int>* newRoot = st.top();
    st.pop();

    TreeNode<int>* parent = newRoot;

    while(!st.empty()){
        auto curr = st.top();
        st.pop();

        if(curr->right==parent){
            curr->right = curr->left;
            curr->left = NULL;
        }

        else if(curr->left==parent){
            curr->left = NULL;
        }

        parent->left = curr;
        parent = curr;
    }
    return newRoot;
}