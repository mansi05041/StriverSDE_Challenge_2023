int editDistance(string str1, string str2){

    // tabulation
    vector<vector<int>> dp(str1.size()+1,vector<int>(str.size()+1,-1));

    // base case
    for(int i=0;i<=str1.size();i++) dp[i][0] = i;
    for(int j=0;j<=str2.size();j++) dp[0][j] = j;

    for(int i=1;i<=str1.size();i++){
        for(int j=1;j<=str2.size();j++){

            // if the character matches
            if(str1[i-1]==str2[j-1]) dp[i][j] = dp[i-1][j-1];
            else{
                // explore all the options
                int insertion = 1 + dp[i][j-1];
                int deletion = 1 + dp[i-1][j];
                int replace = 1 + dp[i-1][j-1];

                dp[i][j] = min(insertion,min(deletion,replace));
            }
        }
    }

    return dp[str1.size()][str2.size()];
}