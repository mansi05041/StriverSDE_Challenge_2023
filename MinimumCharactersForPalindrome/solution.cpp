int minCharasforPalindrome(string str){

    int n = str.size();
    string rev = str;
    reverse(rev.begin(),rev.end());
    str+="$"+rev;

    // building lps array
    vector<int> lps(str.size());
    for(int i=1;i<lps.size();i++){
        int j = lps[i-1];
        while(j>0 && str[i]!=str[j]) j = lps[j-1];
        if(str[i]==str[j]) j++;
        lps[i] = j;
    }

    return n-lps[lps.size()-1];
}