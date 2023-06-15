int findMaximumCoins(int amount){
    vector<int> coins = {1,2,5,10,20,50,100,500,1000};
    int total = 0;
    for(int i=coins.size()-1;i>=0;i--){
        while(amount>=coins[i]){
            amount-=coins[i];
            total++;
        }
    }
    return total;
}