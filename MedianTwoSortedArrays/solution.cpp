double median(vector<int>& a,vector<int>& b){
    // use binary search
    int n1 = a.size();
    int n2 = b.size();

    // assuming that n1 is always lesser than n2
    if(n2<n1) return median(b,a);

    int total = n1+n2;
    int half = (total+1)/2;

    // performing binary search in a
    int low =0;
    int high =n1;

    while(low<=high){
        int cut1 = low+(high-low)/2; // cut the a
        int cut2 = half-cut1; // cut the b

        int left1 = cut1==0? INT_MIN: a[cut1-1];
        int left2 = cut1==n1? INT_MAX: a[cut1];

        int right1 = cut2==0? INT_MIN: b[cut2-1];
        int right2 = cut2==n2? INT_MAX: b[cut2];

        if(left1<=right2 && left2<=right1){
            if(total%2==0) return (max(left1,left2)+min(right1,right2))/2.0;
            else return max(left1,left2);
        }
        else if(left1>right2) high = cut1-1;
        else low = cut1+1;
    }
    return 0.0;
}