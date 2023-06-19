bool isSafe(vector<vector<int>>& mat,int node,int col,vector<int>& color){
    // iterate all the nodes
    for(int i=0;i<n;i++){
        if(i!=node && mat[i][node]==1 && color[i]==col) return false;
    }
    return true;
}

bool solve(vector<vector<int>>& mat,int m,int n,vector<int>& color,int node){
    // base case
    if(node==n) return true;
    // try all the possible colors for the node
    for(int i=1;i<=m;i++){
        if(isSafe(mat,node,i,n,color)){
            // set the color
            color[node]=i;
            if(solve(mat,m,n,color,node+1)) return true;
            // backtrack
            color[node]=0;
        }
    }
    return false;
}

string graphColoring(vector<vector<int>>& mat,int m){
    int n= mat.size();
    vector<int> color(n+1,0);
    return solve(mat,m,n,color,0) ? "YES" : "NO";
}