/************************************************************

    Following is the TreeNode class structure:

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

vector<int> getTopView(TreeNode<int>* root){
    // base case
    if(!root) return{};

    // map to store horizontal distance as key and node's value as the value.
    map<int,int> mp;
    vector<int> ans;
    queue<pair<int,TreeNode<int>*>> q;

    // push the root with horizontal distance 0
    q.push({0,root});

    while(!q.empty()){
        auto node = q.front().second;
        auto hd = q.front().first;
        q.pop();

        // check if it is not present in the map
        if(mp.find(hd)==mp.end()){
            mp[hd]=node->val;
        }

        // check it the left child exists
        if(node->left) q.push({hd-1,node->left});
        // check if the right child exists
        if(node->right) q.push({hd+1,node->right});
    }

    for(auto it: mp){
        ans.push_back(it.second);
    }

    return ans;
}