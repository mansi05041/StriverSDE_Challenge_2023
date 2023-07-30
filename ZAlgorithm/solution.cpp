void createZArr(string str,vector<int>& Z){
    int n = str.length();
    int left, right, k;
    
    left = right = 0;
    for(int i=1;i<n;i++){
        if(i>right){
            left = right = i;
            while(right<n && str[right-left]==str[right]) right++;
            Z[i] = right-left;
            right--;
        }

        else{
            k = i-left;
            if(Z[k]<right-i+1) Z[i] = Z[k];
            else{
                left = i;
                while(right<n && str[right-left]==str[right]) right++;
                Z[i] = right-left;
                right--;
            }
        }
    }
}

int ZAlgorithm(string s,string p,int n,int m){

    string concat = p+"$"+s;
    int len = concat.size();

    vector<int> Z(len,0);
    createZArr(concat,Z);

    int count = 0;
    // find the total occurence of pattern
    for(int i=0;i<len;i++){
        if(Z[i]==p.size()) count++;
    }

    return count;
}