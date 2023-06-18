bool IsPalindrome(string s,int start,int end){
    while(start<end){
        if(s[start]!=s[end]) return false;
        start++;
        end--;
    }
    return true;
}

void solve(string s,int idx,vector<vector<string>>& res,vector<string> temp){
    // base case
    if(idx==s.size()) res.push_back(temp);

    for(int i=idx;i<s.size();i++){
        if(IsPalindrome(s,idx,i)){
            temp.push_back(s.substr(idx,i-idx+1));
            solve(s,i+1,res,temp);
            temp.pop_back();
        }
    }
}

vector<vector<string>> partition(string &s){
    vector<vector<string>> res;
    solve(s,0,res,{});
    return res;
}