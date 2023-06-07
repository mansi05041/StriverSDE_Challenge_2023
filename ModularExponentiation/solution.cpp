int modularExponentiation(int x,int n,int m){
    long ans=1;
    long temp=x;
    while (n>0)
    {
        if(n%2!=0) ans=((ans)%m*(temp)%m)%m;
        temp = ((temp)%m*(temp)%m)%m;
        n>>=1;
    }
    return (int)ans%m;
}