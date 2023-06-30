int atoi(string str){
    int ans = 0;
    for(char x:str){
        if('0'<=x && x<='9'){
            ans*=10;
            ans+=x-'0';
        }
    }
    if(str[0]=='-') ans*=-1;
    return ans;
}