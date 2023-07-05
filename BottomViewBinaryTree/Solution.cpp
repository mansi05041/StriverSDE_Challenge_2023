/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
vector<int> bottomView(BinaryTree<int>* root){

    // map to store the node's data as value and horizontal distance as key
    map<int,int> mp;
    queue<pair<int,BinaryTreeNode<int>*>> q;

    // push the root into queue with horizontal distance 0
    q.push({0,root});

    while(!q.empty()){
        auto node = q.front().second;
        auto hd = q.front().first;
        q.pop();

        // insert the node into map or update if exists already
        mp[hd]=node->data;

        // if the left child exists
        if(node->left) q.push({hd-1,node->left});
        // if the right child exists
        if(node->right) q.push({hd+1,node->right});
    }

    vector<int> ans;
    for(auto it: mp){
        ans.push_back(it.second);
    }

    return ans;
}