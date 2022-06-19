class Solution {
public:
    int helper(int i, int j, vector<vector<int>>& grid, vector<vector<int>> &dp){
        if(i==0)
            return grid[i][j];
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
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
        int mini = 1e9;
        for(int j=0;j<m;j++){
            mini = min(mini,helper(n-1,j,grid,dp));
        }
        
        return mini;
    }
};