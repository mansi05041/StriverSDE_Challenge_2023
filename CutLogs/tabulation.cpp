int cutLogs(int k,int n){
    vector<vector<int>> dp(k+1,vector<int>(n+1,0));

    // base case
    for(int i=0;i<=k;i++){
        for(int j=0;j<=n;j++){
            dp[i][j] = j;
        }
    }

    for(int i=2;i<=k;i++){
        for(int j=2;j<=n;j++){
            for(int k=1;k<=j;k++){
                int curr = max(dp[i-1][k-1],dp[i][j-k]);
                dp[i][j] = min(dp[i][j],curr);
            }
            dp[i][j]++;
        }
    }

    return dp[k][n];
}