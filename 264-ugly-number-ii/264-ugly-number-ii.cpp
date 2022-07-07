class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n,0);
        dp[0] = 1;
        
        int ind2 = 0, ind3 = 0, ind5 = 0;
        for(int i=1;i<n;i++){
            dp[i] = min({dp[ind2]*2,dp[ind3]*3,dp[ind5]*5});
            if(dp[i]==dp[ind2]*2) ind2++;
            if(dp[i]==dp[ind3]*3) ind3++;
            if(dp[i]==dp[ind5]*5) ind5++;
        }
        
        return dp[n-1];
    }
};