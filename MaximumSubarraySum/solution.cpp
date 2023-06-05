
long long maxSubarraySum(int arr[],int n){
    long long curSum = 0;
    long long maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        // add the elements to current sum
        curSum+=arr[i];
        // if the current sum is negative set to 0
        if(curSum<0) curSum=0;
        // update the maximum sum
        maxSum=max(maxSum,curSum);
    }
    return maxSum;
}