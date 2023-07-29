int Memorization(int i,int j,string str1,string str2,vector<vector<int>>& dp){
    // base case
    if(i<0 || j<0) return 0;

    // if the subproblem is already solved
    if(dp[i][j]!=-1) return dp[i][j];

    // if the character matches
    if(str1[i]==str2[j]) return 1 + Memorization(i-1,j-1,str1,str2,dp);

    // if not matches, then explore other ways
    return dp[i][j] = max(Memorization(i-1,j,str1,str2,dp),Memorization(i,j-1,str1,str2,dp));
}

int lcs(string s,string t){
    vector<vector<int>> dp(s.size(),vector<int>(t.size(),-1));

    return Memorization(s.size()-1,t.size()-1,s,t,dp);
}