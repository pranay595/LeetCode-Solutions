class Solution {
public:
int helper(int i, int j, vector<vector<int>> &dp, vector<vector<int>>& obstacleGrid){
        if (i<0 || j<0)
            return 0;
    
        if(obstacleGrid[i][j]==1)
            return 0;
    
        if(i==0 && j==0)
            return 1;
        
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int up = helper(i-1,j,dp,obstacleGrid);
        int left = helper(i,j-1,dp,obstacleGrid);
        
        return dp[i][j] = left+up;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        vector<vector<int>> dp(m,vector<int>(n,-1));
        // return helper(m-1,n-1,dp,obstacleGrid);
        vector<int> prev(n,0);
        
        for(int i=0;i<m;i++){
            vector<int> temp(n,0);
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j]==1)
                    temp[j]=0;
                    
                else if(i==0 && j==0)
                    temp[j]=1;
                
                else{
                int up = 0;
                int left = 0;
                
                if(i>0){
                    up = prev[j];
                }
                if(j>0)
                    left = temp[j-1];
                
                temp[j]=left+up;
                }
            }
            prev = temp;
        }
        return prev[n-1];
        
    }
};