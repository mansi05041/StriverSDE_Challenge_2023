int Memorization(int idx,int prev,int arr[],int n,vector<vector<int>>& dp){
    // base case
    if(idx==n) return 0;

    // if the problem is already solved
    if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];

    // not take the element
    int len = 0 + Memorization(idx+1,prev,arr,n,dp);

    // take the element
    if(prev==-1 || arr[idx]>arr[prev]) len = max(len,1 + Memorization(idx+1,idx,arr,n,dp));

    return len;
}

int longestIncreasingSubsequence(int arr[],int n){
    // memorization map
    vector<vector<int>> dp(n,vector<int>(n+1,-1));

    return Memorization(0,-1,arr,n,dp);
}