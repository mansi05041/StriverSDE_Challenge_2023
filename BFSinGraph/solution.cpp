void bfsHelper(int node,vector<int> adj[],vector<int>& visited,vector<int>& res){
    queue<int> q;

    // push the current node into queue
    q.push(node);
    // mark the current node visited
    visited[node] = 1;

    while(!q.empty()){
        auto qnode = q.front();
        q.pop();

        // storing into traversal
        res.push_back(qnode);

        // iterate to all adjacent neighbors
        for(auto it:adj[qnode]){
            if(visited[it]==0){
                q.push(it);
                visited[it]=1;
            }
        }
    }
}

vector<int> BFS(int vertex,vector<pair<int,int>> edges){
    // base case
    if(vertex==0) return {};

    // visited array
    vector<int> visited(vertex,0);

    // adjacency list
    vector<int> adj[vertex];

    for(auto it: edges){
        adj[it.first].push_back(it.second);
        adj[it.second].push_back(it.first);
    }

    // sort the adjacency list
    for(int i=0;i<vertex;i++) sort(adj[i].begin(),adj[i].end());

    vector<int> res;

    for(int i=0;i<vertex;i++){
        if(visited[i]==0) bfsHelper(i,adj,visites,res);
    }
    
    return res;
}