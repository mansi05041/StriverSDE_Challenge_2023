bool isPalindrome(string str){
    int start = 0;
    int end = str.size()-1;
    while(start<end){
        if(str[start]!=str[end]) return false;
        start++;
        end--;
    }
    return true;
}

int Memorization(int idx,string str,int n,vector<int>& dp){
    // base case
    if(idx==n) return 0;

    // if the subproblem is already solved
    if(dp[idx]!=-1) return dp[idx];

    int minPartition = 1e9;

    for(int j=idx;j<n;j++){
        if(isPalindrome(str.substr(idx,j-idx+1))){
            int partition = 1 + Memorization(j+1,str,n,dp);
            minPartition = min(minPartition,partition);
        }
    }
    return dp[idx] = minPartition;
}

int palindromePartioning(string str){

    vector<int> dp(str.size(),-1);
    return Memorization(0,str,str.size(),dp)-1;
}