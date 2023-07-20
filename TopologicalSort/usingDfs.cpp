void dfs(vector<int>& visited,vector<int> adj[],int node,stack<int>& st){
    // mark the node visited
    visited[node] = 1;

    // iterate to the adjacent neighbors
    for(auto it: adj[node]){
        if(visited[it]==0) dfs(visited,adj,it,st);
    }

    // push the node into stack
    st.push(node);
}

vector<int> topologicalSort(vector<vector<int>>& edges,int v,int e){
    // to store the topological sort
    stack<int> st;

    // adjacency list
    vector<int> adj[v];
    for(auto it: edges) adj[it[0]].push_back(it[1]);

    // visited array
    vector<int> visited(v,0);

    // getting the topological sort
    for(int i=0;i<v;i++){
        if(visited[i]==0) dfs(visited,adj,i,st);
    }

    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    return ans;
}