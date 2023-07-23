int bellmanFord(int n,int m,int src,int dest,vector<vector<int>>& edges){

    // base case
    if(edges.size()==0) return 0;

    vector<int> dist(n+1,1e9);
    // set the source node distance 0
    dist[src] = 0;

    // relax the edges
    for(int i=1;i<n;i++){
        for(auto it: edges){
            auto u = it[0];
            auto v = it[1];
            auto wt = it[2];

            if(dist[u]!=1e9 && dist[v]>dist[u]+wt) dist[v] = dist[u]+wt;
        }
    }

    // finding the negative weight cycle 
    for(auto it: edges){
        auto u = it[0];
        auto v = it[1];
        auto wt = it[2];

        if(dist[u]!=1e9 && dist[v]>dist[u]+wt) return -1;
    }

    // return the distance from the source to dest
    return dist[dest];
}