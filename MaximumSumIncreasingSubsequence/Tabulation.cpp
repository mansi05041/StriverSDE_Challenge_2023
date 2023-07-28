int maxIncreasingDumbbellsSum(vector<int>& rack,int n){

    // memorization map
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));

    for(int idx=n-1;idx>=0;idx--){
        for(int prev=idx-1;prev>=-1;prev--){
            // not to take the element
            int notTake = dp[idx+1][prev+1];
            // take the element
            int take = 0;
            if(rack[idx]>rack[prev]) take = rack[idx] + dp[idx+1][idx+1];

            dp[idx][prev+1] = max(notTake,take);
        }
    }

    return dp[0][0];
}