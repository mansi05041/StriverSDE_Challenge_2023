int maxProfit(vector<int>& values, vector<int>& weight, int n, int w){

    vector<vector<int>> dp(n,vector<int>(w+1,0));

    // base condition
    for(int i=weights[0];i<=w;i++) dp[0][i] = values[0];

    for(int i=1;i<n;i++){
        for(int j=1;j<=w;j++){

            // not take
            dp[i][j] = dp[i-1][j];

            // take
            if(weights[i]<=j){
                dp[i][j] = max(dp[i][j],values+dp[i-1][j-weights[i]]);
            }
        }
    }

    return dp[n-1][w];
}