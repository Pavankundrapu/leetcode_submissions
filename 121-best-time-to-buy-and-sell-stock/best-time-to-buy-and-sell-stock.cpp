class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int profit = 0;
        int currentprofit;
        for(int i = 1;i<prices.size();i++)
        {
            if(prices[i]<mini)
            {
                mini = prices[i];
            }
            currentprofit = prices[i]-mini;
            if(currentprofit>profit)
            {
                profit = currentprofit;
            }
        }
        return profit;
    }
};