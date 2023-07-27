bool memorization(set<string>& st,vector<int>& dp,int idx,string target){
    // base case
    if(idx>=target.size()) return true;

    // if the problem is already solved
    if(dp[idx]!=-1) return dp[idx]==1 ? true : false;

    // iterate over the each substring and find in set
    string str = "";
    for(int i=idx;i<target.size();i++){
        str.push_back(target[i]);
        // find the substring in the set
        if(st.find(str)!=st.end()){
            bool recur = memorization(st,dp.i+1,target);
            if(recur){
                dp[idx]=1;
                return true;
            }
        }
    }

    dp[idx]=0;
    return false;
}

bool wordBreak(vector<string>& arr,int n,string& target){
    set<string> st;
    for(auto it:arr) st.insert(it);

    vector<int> dp(target.size(),-1);
    return memorization(st,dp,0,target);
}