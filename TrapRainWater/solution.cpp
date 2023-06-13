long getTrappedWater(long *arr,int n){
    // base case
    if(n<=1) return 0;

    long maxLeft = arr[0]; // store the maximum length on the left side
    long maxRight = arr[n-1]; // store the minimum length on the right side
    int left = 1;
    int right = n-2;
    long trapWater = 0;

    while(left<=right){
        if(maxLeft<maxRight){
            // update the maxLeft
            if(maxLeft<arr[left]) maxLeft = arr[left];
            else trapWater+=maxLeft-arr[left];
            left++;
        }
        else{
            // update the maxRight
            if(maxRight<arr[right]) maxRight = arr[right];
            else trapWater+=maxRight-arr[right];
            right--;
        }
    }
    return trapWater;
}