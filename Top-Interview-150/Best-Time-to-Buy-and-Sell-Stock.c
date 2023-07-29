int maxProfit(int* prices, int pricesSize){
    int most_earning = 0;
    int i = 1;
    int buy = prices[0];
    int sell = 0;
    while (i < pricesSize)
    {
        if (prices[i] < buy)
            buy = prices[i];
        else if (prices[i] > buy)
        {
            sell = prices[i];
            if (most_earning < sell - buy)
                most_earning = sell - buy;
        }
        i++;
    }
    return (most_earning);
}