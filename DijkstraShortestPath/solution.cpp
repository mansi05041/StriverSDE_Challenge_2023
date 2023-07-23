vector<int> dijkstra(vector<vector<int>>& vec,int vertices,int edges,int source){

    // min heap to store the shortest distance {dis,u}
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    // distance vector
    vector<int> dist(vertices,INT_MAX);

    // set the distance of source node 0 and push into min heap
    dist[source] = 0;
    pq.push({0,source});

    // adjacency list
    vector<pair<int,int>> adj[vertices];
    for(auto it: vec){
        adj[it[0]].push_back({it[1],it[2]});
        adj[it[1]].push_back({it[0],it[2]});
    }

    while(!pq.empty()){

        // get the minimum distance
        auto node = pq.top().second;
        auto dis = pq.top().first;
        pq.pop();

        // iterate to the adjacent neighbors
        for(auto it:adj[node]){
            auto v = it.first;
            auto wt = it.second;

            if(dist[v]>dist[node]+wt){
                dist[v] = dist[node]+wt;
                pq.push({dist[v],v});
            }
        }
    }

    return dist;
}