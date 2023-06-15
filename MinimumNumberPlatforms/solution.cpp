int calculateMinPlatforms(int at[],int dt[],int n){
    // sort the arrival and departure time in ascending order
    sort(at,at+n);
    sort(dt,dt+n);

    int platform = 1; // consider first train occupy the platform
    int maxPlatform = 1;
    int i=0, j=1;

    while(i<n && j<n){
        if(at[j]<=dt[i]){
            platform++;
            j++;
        }
        else{
            platform--;
            i++;
        }
        maxPlatform = max(maxPlatform,platform);
    }
    return maxPlatform;
}