bool Memorization(int idx, int target, vector<int>& arr,vector<vector<int>>& dp){
    // base case
    if(target==0) return true;
    if(idx==0) return target==arr[idx];

    // if the subproblem is already solved
    if(dp[idx][target]!=-1) return dp[idx][target];

    // not to take the element
    bool notTake = Memorization(idx-1,target,arr,dp);

    // take the element
    bool take = false;
    if(target>=arr[idx]) take = Memorization(idx-1,target-arr[idx],arr,dp);

    return dp[idx][target] = notTake || take;
}

bool subsetSumToK(int n, int k, vector<int>& arr){
    vector<vector<int>> dp(n,vector<int>(k+1,-1));
    return Memorization(n-1,k,arr,dp);
}