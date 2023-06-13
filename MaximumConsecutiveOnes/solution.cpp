int longestSubseg(vector<int>& arr, int n, int k){
    int count=0;
    int i=0;
    int ans=0;

    for(int j=0;j<n;j++){
        if(arr[j]==0) count++;
        while (count>k)
        {
            if(arr[i]==0) count--;
            i++;
        }
        ans = max(ans,j-i+1);
    }
    return ans;
}