/*Function to check if it is possible to allocate book in such a way that
no student reads for more than 'hpd' hours per day, given a limit on the number of students 'limit'*/

bool isPossible(long long& hpd,int& limit,vector<int>& time){
    long long count = 1; // initialize the count of students to 1
    long long sum = 0; // intialize the sum of hours read by a student in a day to 0

    for(auto it: time){
        if(it>hpd) return false; // if any book requires more hours

        if(sum+it<=hpd) sum+=it; 
        else{
            // time exceeds then a new day starts
            count++;
            sum = it; // reset the total time
        }
    }

    return count<=limit;
}

long long ayushGivesNinjatest(int n,int m,vector<int> time){
    long long low = 1;
    long long high = LLONG_MAX;

    long long mid;

    // perform the binary search 
    while(low<high){
        mid = low + (high-low)/2;

        if(isPossible(mid,n,time)) high = mid; // it is possible to allocate books, then shrink the search space [low,mid]
        else high = mid+1; // not possible search in the [mid+1,high]

    }

    return low;
}