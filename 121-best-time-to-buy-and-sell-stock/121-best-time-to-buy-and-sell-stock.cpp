class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int profit = 0;
       for(int i=0;i<prices.size();i++){
           minPrice = min(prices[i],minPrice);
           profit = max(prices[i]-minPrice,profit);
       }
        return profit;
    }
};