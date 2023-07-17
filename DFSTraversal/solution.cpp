void dfs(int node,vector<int>& temp,vector<int>& visited,vector<int> adj[]){
    // mark the node visited
    visited[node]=1;
    // add the node into temp
    temp.push_back(node);

    // iterate to the adjacent neighbors
    for(auto it: adj[node]){
        if(visited[it]==0) dfs(it,temp,visited,adj);
    }
}

vector<vector<int>> depthFirstSearch(int V,int E,vector<vector<int>>& edges){
    // visited array
    vector<int> visited(V,0);

    // adjacency list
    vector<int> adj[];
    for(int i=0;i<edges.size();i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    vector<vector<int>> res;
    for(int i=0;i<V;i++){
        if(visited[i]==0){
            vector<int> temp;
            dfs(i,temp,visited,adj);
            res.push_back(temp);
        }
    }
    return res;
}