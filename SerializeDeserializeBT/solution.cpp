#include <sstream>
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

string serializeTree(TreeNode<int>* root){
    if(!root) return "#,";

    string str = to_string(root->data)+",";
    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        auto node = q.front();
        q.pop();

        if(node->left){
            str+= to_string(node->left->data)+",";
            q.push(node->left);
        }
        else str+="#,";

        if(node->right){
            str+=to_string(node->right->data)+",";
            q.push(node->right);
        }
        else str+="#,";
    }

    return str;
}

TreeNode<int>* deserializeTree(string& serialized){
    if(serialized=="#") return NULL;

    stringstream s(serialized);
    string str;
    queue<TreeNode<int>*> q;

    getline(s,str,',');
    TreeNode<int>* root = new TreeNode<int>(stoi(str));
    q.push(root);

    while(!q.empty()){
        auto node = q.front();
        q.pop();

        // left child
        getline(s,str,',');
        if(str=="#") node->left = NULL;
        else{
            TreeNode<int>* leftChild = new TreeNode<int>(stoi(str));
            node->left = leftChild;
            q.push(leftChild);
        }

        // right child
        getline(s,str,',');
        if(str=="#") node->right = NULL;
        else{
            TreeNode<int>* rightChild = new TreeNode<int>(stoi(str));
            node->right = rightChild;
            q.push(rightChild);
        }
    }

    return root;
}