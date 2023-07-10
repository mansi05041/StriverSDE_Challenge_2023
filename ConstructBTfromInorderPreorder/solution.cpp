/************************************************************

    Following is the TreeNode class structure

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
TreeNode<int>* helper(unordered_map<int,int>& inorder,vector<int>& preorder,int start,int end,int& idx){

    // base case
    if(start>end) return NULL;

    TreeNode<int>* root = new TreeNode<int>(preorder[idx++]);

    // find the index of root in inorder
    int it = inorder[root->data];

    // find the left subtree
    root->left = helper(inorder,preorder,start,it-1,idx);
    // find the right subtree
    root->right = helper(inorder,preorder,it+1,end,idx);

    return root;
}

TreeNode<int>* buildBinaryTree(vector<int>& inorder,vector<int>& preorder){
    // create a map to store the inorder traversal
    unordered_map<int,int> mp;
    for(int i=0;i<inorder.size();i++){
        mp[inorder[i]] = i;
    }

    int idx = 0;
    int start = 0;
    int end = inorder.size()-1;

    return helper(mp,preorder,start,end,idx);
}
