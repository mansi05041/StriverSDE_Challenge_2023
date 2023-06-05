vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2,int m, int n){
    int i=m-1; // track the elements of arr1
    int j=n-1; // track the elements of arr2

    while (i>=0 && j>=0)
    {
        // if the arr1 element is greater
        if(arr1[i]>arr2[j]){
            arr1[i+j+1]=arr1[i];
            i--;
        }
        else{
            arr1[i+j+1]=arr2[j];
            j--;
        }
    }

    // include the remaining elements
    while(j>=0){
        arr1[i+j+1]=arr2[j];
        j--;
    }
    
    return arr1;
}