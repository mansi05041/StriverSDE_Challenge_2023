int Memorization(vector<int>& price,int idx,int rodLength,vector<vector<int>>& dp){
    // base case
    if(idx==0) return price[0]*rodLength;

    // if the problem is already solved 
    if(dp[idx][rodLength]!=-1) return dp[idx][rodLength];

    // not taking that length
    int notTake = 0 + Memorization(price,idx-1,rodLength,dp);
    // take that length
    int take = INT_MIN;
    if(idx+1<=rodLength) take = price[idx] + Memorization(price,idx,rodLength-idx-1,dp);

    return dp[idx][rodLength] = max(notTake,take);
}

int cutRod(vector<int>& price,int n){
    // memorization map
    vector<vector<int>> dp(n,vector<int>(n+1,-1));
    return Memorization(price,n-1,n,dp);
}