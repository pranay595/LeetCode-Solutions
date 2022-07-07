class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        sort(costs.begin(),costs.end());
        if(coins<costs[0])
            return 0;
        
        for(int i=0;i<n;i++){
            if(costs[i]>coins && i>0)
                return i;
            coins-=costs[i];
        }
        return n;
    }
};