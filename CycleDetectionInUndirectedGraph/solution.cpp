bool isCycle(vector<int>& visited,vector<int> adj[],int node,int parent){
    // mark the node visited
    visited[node] = 1;
    
    // iterate to all the neighbors
    for(auto it: adj[node]){
        // if not visited yet
        if(visited[it]==0){
            if(isCycle(visited,adj,it,node)) return true;
        }
        else if(parent!=it) return true;
    }
    return false;
}

string cycleDetection(vector<vector<int>>& edges, int n,int m){

    // visited vector
    vector<int> visited(n+1,0);

    // adjacency list
    vector<int> adj[n+1];
    for(auto it: edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }

    // iterate to all vertices, as there can be disconnected components
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            if(isCycle(visited,adj,i,-1)) return "Yes";
        }
    }
    return "No";
}