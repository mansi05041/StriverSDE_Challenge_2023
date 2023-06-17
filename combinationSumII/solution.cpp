void solve(vector<int>& arr,int n,int target,int idx,vector<vector<int>>& res,vector<int> temp){
    // base case
    if(target==0) res.push_back(temp);

    for(int i=idx;i<n;i++){
        // pick the element
        if(i!=idx && arr[i]==arr[i-1]) continue;
        temp.push_back(arr[i]);
        solve(arr,n,target-arr[i],i+1,res,temp);
        temp.pop_back(); // backtracking
    }
}

vector<vector<int>> combinationSum2(vector<int>& arr, int n, int target){
    vector<vector<int>> res;
    sort(arr.begin(),arr.end());
    solve(arr,n,target,0,res,{});
    sort(res.begin(),res.end());
    return res;
}