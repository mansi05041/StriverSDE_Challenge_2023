int NthRoot(int n,int m){
    int start = 1,end =m;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(pow(mid,n)==m) return mid;
        else if(pow(mid,n)>m) return end = mid-1;
        else start = miid+1;
    }
    return -1;
}