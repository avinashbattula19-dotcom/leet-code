int maxProfit(int* prices, int pricesSize) {
    int min=prices[0];
    int max=0;
    int profit;
    int i=1;
    while(i<pricesSize){
        if(prices[i]<min)
            min=prices[i];
        
        profit=prices[i]-min;
        if(max<profit)
        max=profit;
        i++;
    }
    return max;
}