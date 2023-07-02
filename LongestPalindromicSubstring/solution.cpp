int expandAroundCenter(string str,int left,int right){
    while (left>=0 && right<str.size() && str[left]==str[right])
    {
        left--;
        right++;
    }
    return right-left-1;
}

string longestPalinSubstring(string str){
    if(str.size()<1) return "";
    int start = 0;
    int maxLen = 0;
    for(int i=0;i<str.size();i++){
        int len1 = expandAroundCenter(str,i,i);
        int len2 = expandAroundCenter(str,i,i+1);
        int len = max(len1,len2);
        if(len>maxLen){
            start = i-(len-1)/2;
            maxLen = len;
        }
    }
    return str.substr(start,maxLen);
}