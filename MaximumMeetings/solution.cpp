bool comp(pair<int,pair<int,int>>& a,pair<int,pair<int,int>>& b){
    // sort them according to end times
    if(a.second.second<b.second.second) return true;
    else if(a.second.second>b.second.second) return false;
    // sort according to position
    else if(a.first<b.first) return true;
    return false;
}

vector<int> maximumMeetings(vector<int>& start,vector<int>& end){
    vector<pair<int,pair<int,int>>> meet;
    meet.resize(start.size());

    for(int i=0;i<start.size;i++){
        meet[i].first = i+1;
        meet[i].second.first = start[i];
        meet[i].second.second = end[i];
    }

    // sort the meet
    sort(meet.begin(),meet.end(),comp);

    vector<int> answer;
    int limit = meet[0].second.second;
    answer.push_back(meet[0].first);

    for(int i=1;i<meet.size();i++){
        if(meet[i].second.first>limit){
            limit = meet[i].second.second;
            answer.push_back(meet[i].first);
        }
    }
    return answer;
}