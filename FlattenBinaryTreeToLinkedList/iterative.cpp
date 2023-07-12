/************************************************************

    Following is the TreeNode class structure.

    template <typename T>
    class TreeNode {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
TreeNode<int>* flattenBinaryTree(TreeNode<int>* root){
    stack<TreeNode<int>*> st;
    st.push(root);

    while(!st.empty()){
        auto node = st.top();
        st.pop();

        // push the right child
        if(node->right) st.push(node->right);
        // push the left child
        if(node->left) st.push(node->left);
        
        if(!st.empty()) node->right = st.top();
        node->left = NULL;
    }
    return root;
}