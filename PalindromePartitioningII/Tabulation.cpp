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

int palindromePartitioning(string str){
    vector<int> dp(str.size()+1,0);

    for(int i=str.size()-1;i>=0;i--){
        int minPartition = 1e9;
        for(int j=i;j<str.size();j++){
            if(isPalindrome(str.substr(i,j-i+1))){
                int partition = i + dp[j+1];
                minPartition = min(minPartition,partition);
            }
        }
        dp[i] = minPartition;
    }

    return dp[0]-1;
}