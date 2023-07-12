/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
TreeNode<int>* helper(unordered_map<int,int>& mp,vector<int>& postOrder,int& idx,int start,int end){

    // edge case
    if(start>end) return NULL;

    // create a new node using idx
    TreeNode<int>* node = new TreeNode<int>(postOrder[idx--]);

    // find the index of root in the map
    int it = mp[node->data];

    // complete the right subtree
    node->right = helper(mp,postOrder,idx,it+1,end);
    // complete the left subtree
    node->left = helper(mp,postOrder,idx,start,it-1);

    return node;
}

TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder,vector<int>& inOrder){
    // unordered mao to store the inorder sequence
    unordered_map<int,int> mp;
    for(int i=0;i<inOrder.size();i++) mp[inOrder[i]] = i;

    int pindex = postOrder.size()-1; // root of the binary tree
    int start = 0;
    int end = inOrder.size()-1;

    return helper(mp,postOrder,pindex,start,end);
}