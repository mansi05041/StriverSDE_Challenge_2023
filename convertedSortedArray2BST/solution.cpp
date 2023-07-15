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
TreeNode<int>* helper(vector<int>& arr,int start,int end){
    if(start>end) return NULL;

    // find the middle element
    int mid = start + (end-start)/2;

    TreeNode<int>* root = new TreeNode<int>(arr[mid]);

    // recursively call the function for left subtree
    root->left = helper(arr,start,mid-1);
    // recursively call the function for right subtree
    root->right = helper(arr,mid+1,end);

    return root;
}

TreeNode<int>* sortedArrToBST(vector<int>& arr,int n){
    return helper(arr,0,n-1);
}