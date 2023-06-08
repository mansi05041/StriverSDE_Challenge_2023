int LongestSubsetWithZeroSum(vector<int>& arr){
    // map to store the prefix sum with indices
    unordered_map<int,int> mp;

    // calculate the prefix sum
    for(int i=1;i<arr.size();i++) arr[i]=arr[i]+arr[i-1];

    // calculate the maximum length of subarray that yields sum equals to 0
    int maxLength=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0) maxLength=i+1;
        else if(mp.find(arr[i])!=mp.end()) maxLength=max(maxLength,i-mp[arr[i]]);
        else mp[arr[i]]=i;
    }
    return maxLength;
}