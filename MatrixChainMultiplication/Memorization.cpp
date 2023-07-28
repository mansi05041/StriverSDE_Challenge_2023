int Memorization(int i,int j,vector<int>& arr,vector<int>>& dp){
    // base case: single matrix
    if(i==j) return 0;

    // if the subproblem is already solved
    if(dp[i][j]!=-1) return dp[i][j];

    int minSteps = INT_MAX;

    // partition of array
    for(int k=i;k<j;k++){
        int steps = arr[i-1]*arr[k]*arr[j]+Memorization(i,k,arr,dp)+Memorization(k+1,j,arr,dp);
        minSteps = min(minSteps,steps);
    }

    return dp[i][j] = minSteps;
}

int matrixMultiplication(vector<int>& arr,int N){
    vector<vector<int>> dp(N,vector<int>(N,-1));
    return Memorization(1,N-1,arr,dp);
}