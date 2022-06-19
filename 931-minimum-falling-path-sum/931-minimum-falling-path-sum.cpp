class Solution {
public:
    int helper(int i, int j, int m, vector<vector<int>>& matrix,vector<vector<int>>& dp){
        if(j<0 || j>=m)
            return 1e9;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(i==0)
            return matrix[i][j];
    
        int up = matrix[i][j] + helper(i-1,j,m,matrix,dp);
        int left = matrix[i][j] + helper(i-1,j-1,m,matrix,dp);
        int right = matrix[i][j] + helper(i-1,j+1,m,matrix,dp);
        
        return dp[i][j] = min(up,min(left,right));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
//         vector<vector<int>> dp(n,vector<int>(m,-1));
        
//         int mini = INT_MAX;
//         for(int j=0;j<m;j++){
//             mini = min(helper(n-1,j,m,matrix,dp),mini);
//         }
//         return mini;
        
        vector<int> prev(m,0);
        vector<int> curr(m,0);
        for(int j=0;j<m;j++){
            prev[j] = matrix[0][j];
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int up = (int)1e9;
                int left = (int)1e9;
                int right = (int)1e9;
                up = matrix[i][j] + prev[j];
                if(j>0)
                left = matrix[i][j] + prev[j-1];
                if(j<m-1)
                right = matrix[i][j] + prev[j+1];
                
                curr[j] = min(up,min(left,right));

            }
            prev = curr;
        }
        int mini = 1e9;
        for(int j=0;j<m;j++){
            mini = min(prev[j],mini);
        }
        return mini;
    }
};