int solve(int m,int n,int targetR,int targetC,vector<vector<int>>& dp){
    // base case : current indices are the required
    if(targetR==m-1 && targetC==n-1) return 1;
    // out of the boundary case
    if(targetR<0 || targetR>=m || targetC<0 || targetC>=n) return 0;
    // already solved problem
    if(dp[targetR][targetC]!=-1) return dp[targetR][targetC];

    // explore the right and down paths
    int right = solve(m,n,targetR+1,targetC,dp);
    int down = solve(m,n,targetR,targetC+1,dp);

    return dp[targetR][targetC]=right+down;
}
int uniquePaths(int m,int n){
    // dp table for memorization
    vector<vector<int>> dp(m,vector<int>(n,-1));
    solve(m,n,0,0,dp);
}