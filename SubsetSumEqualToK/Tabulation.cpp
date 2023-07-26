bool subsetSumToK(int n,int k,vector<int>& arr){
    vector<vector<bool>> dp(n,vector<bool>(k+1,false));

    // base case
    for(int i=0;i<n;i++) dp[i][0] = true;
    dp[0][arr[0]] = true;

    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            // not take the element
            bool notTake = dp[i-1][j];
            // take the element
            bool take = false;
            if(j>=arr[i]) take = dp[i-1][j-arr[i]];

            dp[i][j] = take || notTake;
        }
    }
    return dp[n-1][k];
}