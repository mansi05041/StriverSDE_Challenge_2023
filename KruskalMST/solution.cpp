class DisjointSet{
    publc:
    vector<int> parent,rank;

    DisjointSet(int n){
        parent.resize(n+1);
        rank.resize(n+1,0);

        for(int i=0;i<=n;i++) parent[i] = i;
    }

    int FindParent(int node){
        // itself its parent
        if(node==parent[node]) return node;
        return parent[node] = FindParent(parent[node]);
    }

    void UnionByRank(int u,int v){
        // find the ultimate parent of u and v
        int parent_u = FindParent(u);
        int parent_v = FindParent(v);

        // if both have same parent
        if(parent_u==parent_v) return;

        // find the ranks of their parents
        // attach the lower rank node with the higher one
        if(rank[parent_v]<rank[parent_u]) parent[parent_v] = parent_u;
        else if(rank[parent_v]>rank[parent_u]) parent[parent_u] = parent_v;
        else{
            parent[parent_v] = parent_u;
            rank[parent_u]++;
        }
    }
};

int KruskalMST(int n,vector<vector<int>>& graph){

    vector<pair<int,pair<int,int>>> adj;
    for(auto it: graph){
        auto u = it[0];
        auto v = it[1];
        auto wt = it[2];
        adj.push_back({wt,{u,v}});
    }

    // sort the edges according to the minimum weight
    sort(adj.begin(),adj.end());

    int msWt = 0;

    DisjointSet ds(n);

    for(auto it: adj){
        auto wt = it.first;
        auto u = it.second.first;
        auto v = it.second.second;

        // if u and v don't have same parent
        if(ds.FindParent(u)!=ds.FindParent(v)){
            msWt+=wt;
            ds.UnionByRank(u,v);
        }
    }

    return msWt;
}