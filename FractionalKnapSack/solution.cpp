bool compare(pair<int,int>& p1,pair<int,int>& p2){
    // calculate value/weight
    double v1 = (double) p1.second/p1.first;
    double v2 = (double) p2.second/p2.first;
    return v1>v2;
}
double maximumValue(vector<pair<int,int>>& items, int n, int w){
    // Items contains {weight,value}

    // sort the items according to value/weight in descending order
    sort(items.begin(),items.end(),compare);
    double ans = 0;
    int currW = 0;

    for(int i=0;i<n;i++){
        if(w>=items[i].first+currW){
            // add fully to sack
            ans+=items[i].second;
            currW+=items[i].first;
        }
        else{
            // add fraction to sack
            double v = (double)items[i].second/items[i].first;
            ans+=v*(w-currW);
            break;
        }
    }
    return ans;
}