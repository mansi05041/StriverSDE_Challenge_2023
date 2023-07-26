int Memorization(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
    // base cases
    // 1. reach the destination
    if(i==0 && j==0) return grid[0][0];
    // 2. out of the boundary
    if(i<0 || j<0) return 1e9;

    // if the subproblem is already solved
    if(dp[i][j]!=-1) return dp[i][j];

    // explore the ways
    // move upwards
    int up = grid[i][j] + Memorization(i-1,j,grid,dp);
    // move leftwards
    int left = grid[i][j] + Memorization(i,j-1,grid,dp);

    return dp[i][j] = min(up,left);
}

int minSumPath(vector<vector<int>>& grid){
    int n = grid.size();
    int m = grid[0].size();

    // memorization map
    vector<vector<int>> dp(n,vector<int>(m,-1));
    return Memorization(n-1,m-1,grid,dp);
}