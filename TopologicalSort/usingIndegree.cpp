vector<int> topologicalSort(vector<vector<int>>& edges,int v,int e){

    // indegree
    vector<int> indegree(v,0);
    for(auto it: edges) indegree[it[1]]++;

    // adjacency list
    vector<int> adj[v];
    for(auto it: edges) adj[it[0]].push_back(it[1]);

    // queue to store the nodes having zero indegree
    queue<int> q;
    for(int i=0;i<indegree.size();i++){
        if(indegree[i]==0) q.push(i);
    }

    // getting the topological sort
    vector<int> ans;
    while(!q.empty()){
        auto node = q.front();
        q.pop();
        
        ans.push_back(node);

        // iterate to adjacent neighbors
        for(auto it: adj[node]){
            if(--indegree[it]==0) q.push(it);
        }
    }

    return ans;
}