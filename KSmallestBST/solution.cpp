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
void helper(TreeNode<int>* root,int& k,int& ans){
    // base case
    if(!root) return;

    // move to the left
    helper(root->left,k,ans);

    // decrement k
    k--;

    if(k==0){
        ans = root->data;
        return;
    }

    // move to the right
    helper(root->right,k,ans);
}

int KthSmallest(TreeNode<int>* root,int k){
    int ans = -1;
    helper(root,k,ans);
    return ans;
}