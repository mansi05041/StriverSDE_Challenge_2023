long long merge(long long *arr,int left,int right,int mid){
    int i=left;
    int j=mid+1;
    int k=0;
    long long inv=0;
    vector<long long>temp(right-left+1);
    while (i<=mid && j<=right)
    {
        if(arr[i]>arr[j]){
            // found the inversions
            inv+=(mid-i+1);
            temp[k]=arr[j];
            k++; j++;
        }
        else{
            temp[k]=arr[i];
            k++; i++;
        }
    }
    
    // copy the remaining elements
    while (i<=mid)
    {
        temp[k]=arr[i];
        k++; i++;
    }
    while (j<=right)
    {
        temp[k]=arr[j];
        k++; j++;
    }

    // copy the values from temp back to original array
    for(int i=left,k=0;i<=right;i++,k++){
        arr[i]=temp[k];
    }

    return inv;
}

long long mergeSort_modified(long long *arr,int left,int right){
    int mid;
    long long inv=0;
    if(left<right){
        mid=(left+right)/2;
        inv=mergeSort_modified(arr,left,mid+1);
        inv+=mergeSort_modified(arr,mid+1,right);
        inv+=merge(arr,left,right,mid);
    }
    return inv;
}

long long getInversions(long long *arr,int n){
    return mergeSort_modified(arr,0,n-1);
}