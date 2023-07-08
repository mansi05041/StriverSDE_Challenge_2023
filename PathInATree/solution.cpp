/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
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
*/

bool helper(TreeNode<int>* root, int x, vector<int>& path){
    if(!root) return false;

    // push the possible path
    path.push_back(root->data);

    // check if the one of the path contains required node
    if(helper(root->left,x,path)||helper(root->right,x,path)) return true;

    // check if the required node is found
    if(root->data == x) return true;

    // backtrack to explore the other options
    path.pop_back();

    return false;
}

vector<int> pathInATree(TreeNode<int>* root,int x){
    if(!root) return {};
    vector<int> path;

    helper(root,x,path);
    return path;
}