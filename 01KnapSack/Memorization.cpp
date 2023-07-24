int Memorization(int idx,vector<int>& values,vector<int>& weights,int w,vector<vector<int>>& dp){

    // base case
    if(idx==0){
        if(weights[0]<=w) return values[0];
        return 0;
    }

    // if the subproblem is already solved
    if(dp[idx][w]!=-1) return dp[idx][w];

    // consider that we are not taking element
    int notTake = 0 + Memorization(idx-1,values,weights,w,dp);

    // consider to take the element
    int Take = INT_MIN;
    if(weights[idx]<=w) Take = values[idx] + Memorization(idx-1,values,weights,w-weights[idx],dp);

    return dp[idx][w] = max(Take,notTake);
}

int maxProfit(vector<int>& values,vector<int>& weights,int w,int n){

    // memorization map
    vector<vector<int>> dp(n,vector<int>(w+1,-1));

    return Memorization(n-1,values,weights,w,dp);
}