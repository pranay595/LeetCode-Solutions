class Solution {
public:
    int helper(int ind, int n, vector<int>& cost, vector<int>& dp){
        if(ind>=n)
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];
        
        return dp[ind] = cost[ind] + min(helper(ind+1,n,cost,dp),helper(ind+2,n,cost,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1,-1);
        return min(helper(0,n,cost,dp),helper(1,n,cost,dp));
    }
};