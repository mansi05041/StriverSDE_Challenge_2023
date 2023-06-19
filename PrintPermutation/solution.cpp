void solve(vector<string>& perm, int idx, string& s,int n){
    // base case
    if(n==idx) perm.push_back(s);

    for(int i=idx;i<n;i++){
        // swap the values at position i and idx
        swap(s[i],s[idx]);
        solve(perm,idx+1,s,n);
        swap(s[i],s[idx]); // backtracking
    }
}

vector<string> findPermutations(string &s){
    vector<string> perm;
    int n = s.size();
    solve(perm,0,s,n);
    return perm;
}