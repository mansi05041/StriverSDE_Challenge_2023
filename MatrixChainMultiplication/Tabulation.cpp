int matrixMultiplication(vector<int>& arr,int N){
    // Memorization
    vector<vector<int>> dp(N,vector<int>(N,-1));

    // base case : i==j then 0 steps required
    for(int i=1;i<N;i++) dp[i][i] = 0;

    for(int i=1;i>=1;i--){
        for(int j=i+1;j<N;j++){
            int minSteps = INT_MAX;
            for(int k=i;k<j;k++){
                int steps = arr[i-1]*arr[k]*arr[j]+dp[i][k]+dp[k+1][j];
                minSteps = min(minSteps,steps);
            }
            dp[i][j] = minSteps;
        }
    }

    return dp[1][N-1];
}