class Solution {
public:
    int helper(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp){
        if(i==0 && j==0)
            return grid[0][0];
        
        if(i<0 || j<0)
            return 10000000;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int up = grid[i][j] + helper(i-1,j,grid,dp);
        int left = grid[i][j] + helper(i,j-1,grid,dp);
        
        return dp[i][j] = min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();        
        vector<vector<int>> dp(m, vector<int>(n,0));
        // return helper(m-1,n-1,grid,dp);
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0)
                    dp[i][j]=grid[i][j];
                
                else{
                    int up = 1e9;
                    int left = 1e9;
                    if(i>0)
                        up = grid[i][j] + dp[i-1][j];
                    
                    if(j>0)
                        left = grid[i][j] + dp[i][j-1];
                    
                    dp[i][j] = min(up,left);
                }
            }
        }
        return dp[m-1][n-1];
    }
};