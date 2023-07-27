vector<pair<pair<int,int>,int>> calculatePrimeMST(int n, int m, vector<pair<pair<int,int>,int>>& g){

    // adjacency list
    vector<pair<int,int>> adj[n+1];
    for(auto it: g){
        auto u = it.first.first;
        auto v = it.first.second;
        auto wt = it.second;

        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    // visited array
    vector<int> visited(n+1,0);

    // priority queue to store the min weight edge along with weight
    // {wt,{node,parent}}
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;

    // push the source node 
    pq.push({0,{1,-1}});

    // store the MST
    // {{node,parent},wt}
    vector<pair<pair<int,int>,int>> result;

    while(!pq.empty()){

        // remove the top node from min heap
        auto wt = pq.top().first;
        auto node = pq.top().second.first;
        auto parent = pq.top().second.second;
        pq.pop();

        // check if the node is already visited
        if(visited[node]==1) continue;

        // mark the node visited
        visited[node] = 1;

        // push the result if the parent is not -1
        if(parent!=-1) result.push_back({{node,parent},wt});

        // iterate to adjacent neigbours
        for(auto it: adj[node]){
            auto adjNode = it.first;
            auto adjWt = it.second;

            // if not visited yet then push into min heap
            if(visited[adjNode]==0){
                pq.push({adjWt,{adjNode,node}});
            }
        }
    }

    return result;
}