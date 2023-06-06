vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals){
    // resultant array
    vector<vector<int>> result;

    // sort the intervals in ascending order of start point
    sort(intervals.begin(),intervals.end());

    // temporary vector
    vector<int> temp = intervals[0];

    for(int i=1;i<intervals.size();i++){
        if(temp[1]>=intervals[i][0]) temp[1]= max(temp[1],intervals[i][1]);
        else{
            // push the temporary vector into the result
            result.push_back(temp);
            // update the temporary vector
            temp = intervals[i];
        }
    }
    result.push_back(temp);
    return result;
}