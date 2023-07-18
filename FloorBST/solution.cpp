/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int floorInBST(TreeNode<int>* root,int X){
    int ans = INT_MIN;

    while(root){
        // X is equal to root
        if(root->val == X){
            ans = root->val;
            break;
        }

        // X is smaller than root
        else if(root->val>X){
            // move to left
            root = root->left;
        }

        // otherwise X is greater than root
        else{
            ans = max(ans,root->val);
            root = root->right;
        }
    }
    return ans;
}