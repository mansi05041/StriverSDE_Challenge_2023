int Memorization(int i,int j,string str1,string str2,vector<vector<int>>& dp){
    // base case
    // str1 exhausted then it requires the j+1 insertion steps 
    if(i<0) return j+1;
    // str2 exhausted then it requires the i+1 deletion steps
    if(j<0) return i+1;

    // if the subproblem is already solved 
    if(dp[i][j]!=-1) return dp[i][j];

    // if the character matched then shrink the search space
    if(str1[i]==str2[j]) return 0+Memorization(i-1,j-1,str1,str2,dp);

    // explore all the options
    int insertion = 1 + Memorization(i,j-1,str1,str2,dp);
    int deletion = 1 + Memorization(i-1,j,str1,str2,dp);
    int replace = 1 + Memorization(i-1,j-1,str1,str2,dp);

    return dp[i][j] = min(insertion,min(deletion,replace));
}

int editDistance(string str1, string str2){
    vector<vector<int>> dp(str1.size(),vector<int>(str2.size(),-1));
    return Memorization(str1.size()-1,str2.size()-1,str1,str2,dp);
}