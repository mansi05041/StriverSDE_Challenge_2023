int chessTournament(vector<int> positions,int n, int c){
    // sorting all the vaccant positions
    sort(positions.begin(),positions.end());

    int ans = 0;
    int low = 1;
    int high = positions[n-1];

    // apply binary search
    while(low<=high){

        // assuming first room will be always allocated
        int previousRoom = positions[0];
        int count = 1;

        int mid = low + (high-low)/2;

        for(int i=1;i<n;i++){
            if(positions[i]-previousRoom>=mid){
                count++;
                previousRoom=positions[i];
            }
        }

        if(count>=c){
            // there is the possiblity to maximize the answer
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}