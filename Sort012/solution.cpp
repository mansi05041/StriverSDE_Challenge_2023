void sort012(int *arr,int n){
    int zero_ptr=0;
    int one_ptr=0;
    int two_ptr=n-1;

    while(one_ptr<=two_ptr){
        if(arr[one_ptr]==0){
            swap(arr[one_ptr],arr[zero_ptr]);
            one_ptr++;
            zero_ptr++;
        }
        else if(arr[one_ptr]==2){
            swap(arr[one_ptr],arr[two_ptr]);
            two_ptr--;
        }
        else one_ptr++;
    }
}