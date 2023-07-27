int cutRod(vector<int>& price,int n){

    vector<vector<int>> dp(n,vector<int>(n+1,0));

    // base case
    for(int i=0;i<=n;i++) dp[0][i] = price[0]*i;

    for(int i=1;i<n;i++){
        for(int j=0;j<=n;j++){
            // not to cut the rod
            int notTake = 0 + dp[i-1][j];
            // cut the rod
            int take = INT_MIN;
            if(i+1<=j) take = price[i] + dp[i][j-i-1];

            dp[i][j] = max(notTake,take);
        }
    }
    return dp[n-1][n];
}