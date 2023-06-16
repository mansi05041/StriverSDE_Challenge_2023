bool comp(pait<int,int>& a,pair<int,int>& b){
    // sort according to the fininsh time
    return a.second<b.second;
}

int maximumActivities(vector<int>& start,vector<int>& finish){
    vector<pair<int,int>> activity(start.size());

    for(int i=0;i<activity.size();i++){
        activity[i].first = start[i];
        activity[i].second = finish[i];
    }

    // sort the activity according to the finish time
    sort(activity.begin(),activity.end(),comp);

    int total = 1;
    int limit = activity[0].second;

    for(int i=1;i<activity.size();i++){
        if(activity[i].first>=limit){
            total++;
            limit = activity[i].second;
        }
    }
    return total;
}