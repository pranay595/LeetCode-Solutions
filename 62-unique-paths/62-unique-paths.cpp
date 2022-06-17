class Solution {
public:
    int helper(int i, int j, vector<vector<int>> &dp){
        if(i==0 && j==0)
            return 1;
        
        if (i<0 || j<0)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int up = helper(i-1,j,dp);
        int left = helper(i,j-1,dp);
        
        return dp[i][j] = left+up;
    }
    int uniquePaths(int m, int n) {
        // vector<vector<int>> dp(m,vector<int>(n,-1));
        // return helper(m-1,n-1,dp);
        
        vector<int> prev(n,0);
        for(int i=0;i<m;i++){
            vector<int> temp(n,0);
            for(int j=0;j<n;j++){
                if(i==0 && j==0){
                    temp[j]=1;
                    continue;
                }
                int left = 0;
                int up = 0;
                if(i>0)
                    up = prev[j];
                if(j>0)
                    left = temp[j-1];
                    temp[j] = up + left;
                
            }
            prev = temp;
        }
        
        return prev[n-1];
    }
};