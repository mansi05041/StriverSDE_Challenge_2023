/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/
vector<int> verticalOrderTraversal(TreeNode<int>* root){

    map<int,vector<int>> mp;
    queue<pair<int,TreeNode<int>*>> q;

    // push the root into queue
    q.push({0,root});

    while(!q.empty()){
        auto node = q.front().second;
        auto hd = q.front().first;
        q.pop();

        // insert the node data into corresponding hd into map
        mp[hd].push_back(node->data);

        // if left child exists
        if(node->left) q.push({hd-1,node->left});
        // if right child exists
        if(node->right) q.push({hd+1,node->right});
    }

    vector<int> vertical;

    for(auto it: mp){
        for(auto ele: it.second){
            vertical.push_back(ele);
        }
    }

    return vertical;
}
