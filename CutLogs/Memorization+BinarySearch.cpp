int Memorization(int n,int k,vector<vector<int>>& dp){

    // base cases
    if(n<=0 || k<=0) return 0; // no more logs to cut
    if(k==1) return n; // there is only one axe then n logs will be cut
    if(n==1) return 1; // only one length is required

    // if the subproblem is already solved
    if(dp[n][k]!=-1) return dp[n][k];

    int ans = INT_MAX;

    // perform binary search
    int low = 1;
    int high = n;
    while (low<=high)
    {
        int mid = low + (high-low)/2;

        // broke the axe
        int broken = Memorization(mid-1,k-1,dp);
        // not broke the axe
        int notBroken = Memorization(n-mid,k,dp);
        // maximize the result
        int result = max(notBroken,broken);
        // minimize the ans
        ans = min(ans,1+result);

        // update the pointers
        if(broken<notBroken) low = mid+1;
        else high = mid-1;
    }
    return dp[n][k] = ans;
}

int cutLogs(int k,int n){
    vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
    return Memorization(n,k,dp);
}