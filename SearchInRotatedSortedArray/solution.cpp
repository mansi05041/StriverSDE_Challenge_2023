int search(int* arr,int n,int key){
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = low+(high-low)/2;

        // check if we get the target
        if(arr[mid]==key) return mid;

        // check if the left half is sorted
        if(arr[low]<=arr[mid]){
            // target lies in the range of low-mid
            if(arr[low]<=key && key<=arr[mid]) high = mid-1; // key is in left half
            else low = mid+1;

        }
        // or right half is sorted
        else{
            // target lies in the range of mid-high
            if(arr[mid]<=key && key<=arr[high]) low = mid+1; // key is in right half
            else high = mid-1;
        }
    }
    return -1; // if element is not found
}