class Solution {
public:
    int helper(int i, int j, vector<vector<int>>& grid, vector<vector<int>> &dp){
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(i==0)
            return grid[i][j];
        
        int ans = 1e9;
        for(int l=0;l<grid[0].size();l++){
            if(l!=j)
                ans = min(ans, grid[i][j] + helper(i-1,l,grid,dp));
        }
        return dp[i][j] = ans;
    }
    
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> dp(m,vector<int>(m,-1));
        
        for(int j=0;j<m;j++){
            dp[0][j] = grid[0][j];
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                    int ans = 1e9;
                for(int k=0;k<m;k++){
                    if(j!=k){
                        ans = min(ans,dp[i-1][k]);
                    }
                }
                dp[i][j] = ans+grid[i][j];
            }
        }
        
        
        int mini = 1e9;
        for(int j=0;j<m;j++){
            mini = min(mini,dp[n-1][j]);
        }
        
        return mini;
    }
};