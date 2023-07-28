int Memorization(int idx,int prev,vector<int>& rack,int n,vector<vector<int>>& dp){
    // base case
    if(idx==n) return 0;

    // if the problem is already solved 
    if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];

    // not take the element
    int notTake = 0 + Memorization(idx+1,prev,rack,n,dp);

    // take the element
    int take = 0;
    if(prev==-1 || rack[idx]>rack[prev]){
        take = rack[idx] + Memorization(idx+1,idx,rack,n,dp);
    }

    return dp[idx][prev+1] = max(notTake,take);
}

int maxIncreasingDumbbellsSum(vector<int>& rack,int n){
    vector<vector<int>> dp(n,vector<int>(n+1,-1));
    return Recursion(0,-1,rack,n,dp);
}