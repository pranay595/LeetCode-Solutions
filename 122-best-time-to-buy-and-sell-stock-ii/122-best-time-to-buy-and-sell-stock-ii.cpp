class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int profit = 0;
        int size = prices.size();
        
        for(int i=0;i<size-1;i++){
            minPrice = min(prices[i],minPrice);
            
            int currProfit = prices[i+1]-minPrice;
            if(currProfit>=0){
                profit=profit+currProfit;
                minPrice = INT_MAX;
            }
        }
        return profit;
    }
};