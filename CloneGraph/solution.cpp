/***************************************************************************

	Class for graph node is as follows:

	class graphNode
	{
		public:
    		int data;
    	vector<graphNode *> neighbours;
    	graphNode()
    	{
        	data = 0;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val)
    	{
        	data = val;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val, vector<graphNode *> neighbours)
    	{
        	data = val;
        	this->neighbours = neighbours;
    	}
	};

******************************************************************************/
void dfs(graphNode* curr,graphNode* copy,vector<graphNode*>& visited){
    // mark the current node visited
    visited[curr->data] = copy;

    // iterate the neighbours of curr
    for(auto it: curr->neighbours){
        // not visited
        if(!visited[it->data]){
            graphNode* newNode = new graphNode(it->data);
            (copy->neighbours).push_back(newNode);
            dfs(it,newNode,visited);
        }
        else{
            (copy->neighbours).push_back(visited[it->data]);
        }
    }
}

graphNode* cloneGraph(graphNode* node){
    // base case
    if(!node) return NULL;

    // visited vector
    vector<graphNode*> visited(100000,NULL);

    // create a copy of given node and marked it visited
    graphNode* copy = new graphNode(node->data);
    visited[node->data] = copy;

    // iterate to the neighbors
    for(auto it: node->neighbours){
        // if the current node is not visited yet
        if(!visited[it->data]){
            // create a copy of the current node
            graphNode* newNode = new graphNode(it->data);
            // push the copy of the current node into the neighbours list
            (copy->neighbours).push_back(newNode);
            // perform the dfs on the copy of current node
            dfs(it,newNode,visited);
        }
        else{
            // already visited then update the neighbours list
            (copy->neighbours).push_back(visited[it->data]);
        }
    }
    return copy;
}