int merge(vector<int>& arr,int left,int right,int mid){
    // calculate the total reverse pairs
    int pair=0;
    int j=mid+1;
    for(int i=left;i<=mid;i++){
        while(j<=right && arr[i]>2*arr[j]) j++;
        pair+=j-(mid+1);
    }

    // sort the array by merging
    int i=left;
    j=mid+1;
    int k=0;
    vector<int> temp(right-left+1);

    while(i<=mid && j<=right){
        if(arr[i]>arr[j]){
            temp[k]=arr[j];
            k++; j++;
        }
        else{
            temp[k]=arr[i];
            k++; i++;
        }
    }

    // copy the remaining elements
    while(i<=mid){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while (j<=right)
    {
        temp[k]=arr[j];
        k++;
        j++;
    }

    // copy the temp elements back to original
    for(int i=left,k=0;i<=right;i++,k++) arr[i]=temp[k];

    return pair;   
}

int modifiedMergeSort(vector<int>& arr,int left,int right){
    int pair=0;
    int mid;
    if(left<right){
        mid=(left+right)/2;
        pair= modifiedMergeSort(arr,left,mid);
        pair+= modifiedMergeSort(arr,mid+1,right);
        pair+= merge(arr,left,right,mid);
    }
    return pair;
}

int reversePairs(vector<int>& arr,int n){
    return modifiedMergeSort(arr,0,n-1);
}