int findMajorityElement(int arr[], int n){
    int index=0;
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[index]) count++;
        else count--;

        if(count==0){
            index=i;
            count=1;
        }
    }

    if(count>0){
        int c=0;
        int ele = arr[index];
        for(int i=0;i<n;i++){
            if(arr[i]==ele) c++;
        }
        if(c>n/2) return ele;
    }
    return -1;
}