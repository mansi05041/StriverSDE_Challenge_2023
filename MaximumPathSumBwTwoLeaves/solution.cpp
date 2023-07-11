/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
long long int helper(TreeNode<int>* root,long long int& maxi){
    if(!root) return INT_MIN;

    if(!root->left && !root->right) return root->val;

    long long int leftSum = helper(root->left,maxi);
    long long int rightSum = helper(root->right,maxi);

    // update the max path sum
    maxi = max(maxi,root->val+leftSum+rightSum);
    return root->val + max(leftSum,rightSum);
}

long long int findMaxSumPath(TreeNode<int>* root){
    if(!root) return -1;

    long long int maxPathSum = -1;
    helper(root,maxPathSum);

    return maxPathSum;
}