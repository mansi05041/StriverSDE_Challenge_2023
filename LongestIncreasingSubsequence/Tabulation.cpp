int longestIncreasingSubsequence(int arr[], int n){

    // memorization map
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));

    for(int idx=n-1;idx>=0;idx--){
        for(int prev=idx-1;prev>=-1;prev--){
            // not take the element
            int len = 0 + dp[idx+1][prev+1];
            // take the element
            if(prev==-1 || arr[idx]>arr[prev]) len = max(len,dp[idx+1][idx+1]);

            dp[idx][prev+1] = len;
        }
    }

    return dp[0][0];
}