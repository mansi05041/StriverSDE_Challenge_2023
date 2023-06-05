int maximumProfit(vector<int>& prices){
    int n=prices.size();
    int minPrice = prices[0];
    int profit = 0;
    for(int i=1;i<n;i++){
        // update the minPrice
        if(minPrice>prices[i]) minPrice=prices[i];
        else if(prices[i]-minPrice>profit) profit = prices[i]-minPrice;
    }
    return profit;
}