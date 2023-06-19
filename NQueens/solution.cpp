void solve(int col,vector<vector<int>>& temp, vector<vector<int>>& ans, vector<int>& leftRow, vector<int>& upperDiagonal, vector<int>& lowerDiagonal,int n){
    // base case
    if(col==n){
        vector<int> it;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                it.push_back(temp[i][j]);
            }
        }
        ans.push_back(it);
        return;
    }

    for(int row=0;row<n;row++){
        if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0){
            temp[row][col]=1;
            leftRow[row]=1;
            lowerDiagonal[row+col]=1;
            upperDiagonal[n-1+col-row]=1;
            solve(col+1,temp,ans,leftRow,lowerDiagonal,upperDiagonal,n);
            // backtracking
            temp[row][col]=0;
            leftRow[row]=0;
            lowerDiagonal[row+col]=0;
            upperDiagonal[n-1+col-row]=0;
        }
    }
}

vector<vector<int>> solveNQueens(int n){
    vector<vector<int>> ans;
    vector<vector<int>> temp(n,vector<int>(n,0));
    vector<int> leftRow(n,0);
    vector<int> upperDiagonal(2*n-1,0);
    vector<int> lowerDiagonal(2*n-1,0);
    solve(0,temp,ans,leftRow,upperDiagonal,lowerDiagonal,n);
    return ans;
}