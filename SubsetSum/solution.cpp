void SubsetSum(vector<int> &num,int idx,int sum,vector<int>& subset,int n){
    // base case
    if(idx==n){
        // out of bound
        subset.push_back(sum);
        return;
    }

    // pick the element
    SubsetSum(num,idx+1,sum+num[idx],subset,n);
    // not pick the element
    SubsetSum(num,idx+1,sum,subset,n);
}

vector<int> subsetSum(vector<int> &num){
    vector<int> Subset;
    int n = nums.size();
    SubsetSum(num,0,0,subset,n);
    sort(Subset.begin(),Subset.end());
    return Subset;
}