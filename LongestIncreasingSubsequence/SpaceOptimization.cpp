int longestIncreasingSubsequence(int arr[],int n){
    vector<int> dp(n,1);

    for(int idx=0;idx<n;idx++){
        for(int prev=0;prev<idx;prev++){
            if(arr[prev]<arr[idx]){
                dp[idx] = max(dp[idx],1+dp[prev]);
            }
        }
    }

    return *max_element(dp.begin(),dp.end());
}