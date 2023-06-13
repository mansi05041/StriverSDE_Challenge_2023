string fourSum(vector<int> arr, int target, int n){
    // sort the array
    sort(arr.begin(),arr.end());

    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int left = j+1;
            int right = n-1;
            int sum = arr[i]+arr[j];
            while(left<right){
                if(arr[left]+arr[right]+sum==target) return "Yes";
                else if(arr[left]+arr[right]+sum<target) left++;
                else right--;
            }
        }
    }

    return "No";
}