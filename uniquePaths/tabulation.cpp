int uniquePaths(int m,int n){
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));

    // base case: there is a unique path to reach the bottom right
    for(int i=1;i<=m;i++) dp[i][n]=1;
    for(int j=1;j<=n;j++) dp[m][j]=1;

    // calculate the unique paths
    for(int i=m-1,i>=1;i--){
        for(int j=n-1;j>=1;j--){
            dp[i][j]=dp[i+1][j]+dp[i][j+1];
        }
    }

    return dp[1][1];
}