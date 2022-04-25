class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int profit = 0;
        int n = prices.size();
        for(int i=0;i<n;i++){
            minPrice = min(prices[i],minPrice);
            profit = max(prices[i]-minPrice,profit);
        }
        return profit;
    }
};