long Memorization(int* denomination,int value,int idx,vector<vector<long>>& dp){
    // base case
    if(idx==0) return value%denomination[0] == 0 ? 1 : 0;

    // if the sub problem is already solved
    if(dp[idx][value]!=-1) return dp[idx][value];

    // not take the coin
    long notTake = Memorization(denomination,value,idx-1,dp);

    // take the coin
    long take = 0;
    if(denomination[idx]<=value) take = Memorization(denomination,value,idx,dp);

    return dp[idx][value]=notTake+take;
}

long countWaysToMakeChange(int* denominations,int n,int value){
    vector<vector<long>> dp(n,vector<long>(value+1,-1));

    return Memorization(denominations,value,n-1,dp);
}