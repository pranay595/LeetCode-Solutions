class Solution {
public:
    int helper(int i, int j, int n, vector<vector<int>>& triangle, vector<vector<int>>& dp){
        if(i==n-1)
            return triangle[n-1][j];
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int down = triangle[i][j] + helper(i+1,j,n,triangle,dp);
        int diag = triangle[i][j] + helper(i+1,j+1,n,triangle,dp);
        
        return dp[i][j] = min(down,diag);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = triangle[n-1].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        
//         return helper(0,0,n,triangle,dp);
        for(int j=0;j<n;j++){
            dp[n-1][j] = triangle[n-1][j];
        }
        
        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                int down = triangle[i][j] + dp[i+1][j];
                int diag = triangle[i][j] + dp[i+1][j+1];
                
                dp[i][j] = min(down,diag);
            }
        }
        return dp[0][0];
        
    }
};