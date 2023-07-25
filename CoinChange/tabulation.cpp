long countWaysToMakeChange(int* denominations,int n,int value){

    // Tabulation
    vector<vector<long>> dp(n,vector<long>(value+1,-1));

    // base case
    for(int i=0;i<=value;i++) dp[0][i] = i%denominations[0] == 0 ? 1 : 0;

    for(int i=1;i<n;i++){
        for(int j=0;j<=value;j++){
            // not take
            dp[i][j] = dp[i-1][j];

            // take
            if(denominations[i]<=j) dp[i][j]+= dp[i][j-denominations[i]];
        }
    }
    return dp[n-1][value];
}