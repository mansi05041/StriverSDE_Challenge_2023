void dfs_finish(int node,vector<int>& visited,vector<int> adj[],stack<int>& st){
    // mark the node visited
    visited[node] = 1;

    // iterate to neighbours
    for(auto it: adj[node]){
        if(visited[it]==0) dfs_finish(it,visited,adj,st);
    }

    st.push(node);
}

void dfs(int node,vector<int>& visited,vector<int> adj[],vector<int>& temp){
    // mark the node visited
    visited[node] = 1;
    temp.push_back(node);

    // iterate to the neighbours
    for(auto it: adj[node]){
        if(visited[it]==0) dfs(it,visited,adj,temp);
    }
}

vector<vector<int>> stronglyConnectedComponents(int n,vector<vector<int>>& edges){

    // visited vector
    vector<int> visited(n,0);
    stack<int> st;

    // adjacency list
    vector<int> adj[n];
    for(auto it: edges){
        adj[it[0]].push_back(it[1]);
    }

    // sort the all edges according to finish time
    for(int i=0;i<n;i++){
        if(visited[i]==0) dfs_finish(i,visited,adj,st);
    }

    // reverse the edges
    vector<int> adjT[n];
    for(auto it: edges){
        adjT[it[1]].push_back(it[0]);
    }

    // perform dfs to find the sccs
    for(int i=0;i<n;i++) visited[i] = 0;
    vector<vector<int>> result;

    while(!st.empty()){
        auto node = st.top();
        st.pop();
        if(visited[node]==0){
            vector<int> temp;
            dfs(node,visited,adjT,temp);
            result.push_back(temp);
        }
    }

    return result;
}