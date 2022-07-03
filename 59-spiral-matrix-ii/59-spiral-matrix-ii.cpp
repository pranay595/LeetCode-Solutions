class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,1));
        if(n==1)
            return ans;
        int count = 1;
        
        int st_col = 0, st_row = 0;
        int end_row = n-1, end_col = n-1;
        
        while(count<=n*n){
            for(int col=st_col;col<=end_col;col++){
                ans[st_row][col]=count++;
            }
            st_row++;
            
            for(int row=st_row;row<=end_row;row++){
                ans[row][end_col]=count++;
            }
            end_col--;
            
            for(int col=end_col;col>=st_col;col--){
                ans[end_row][col]=count++;
            }
            end_row--;
            
            for(int row=end_row;row>=st_row;row--){
                ans[row][st_col]=count++;
            }
            st_col++;
        }
        return ans;
    }
};