int detectCycleInDirectedGraph(int n,vector<pair<int,int>>& edges){

    // calculate the indegree
    vector<int> indegree(n+1,0);
    for(auto it: edges){
        indegree[it.second]++;
    }

    // adjacency list
    vector<int> adj[n+1];
    for(auto it: edges){
        adj[it.first].push_back(it.second);
    }

    // track the components
    int count = 0;

    // push the all nodes that have 0 indegree
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(indegree[i]==0) q.push(i);
    }

    while(!q.empty()){
        auto node = q.front();
        q.pop();

        // increment the count
        count++;

        // iterate all the adjacent neighbors
        for(auto it: adj[node]){
            if(--indegree[it]==0) q.push(it);
        }
    }

    return count == n ? false : true;
}