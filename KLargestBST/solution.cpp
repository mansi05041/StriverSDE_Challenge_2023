/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void helper(TreeNode<int>* root,int& k,int& ans){
    // base case
    if(!root) return;

    // move to right
    helper(root->right,k,ans);

    // decrement the k
    k--;

    if(k==0){
        ans = root->data;
        return;
    }

    // move to left
    helper(root->left,k,ans);
}

int kthLargestNumber(TreeNode<int>* root,int k){
    int ans = -1;
    helper(root,k,ans);
    return ans;
}
