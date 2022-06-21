class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        
        vector<int> ans;
        int start_row=0, end_row=n-1, start_col=0, end_col=m-1;

        while(start_row<=end_row && start_col<=end_col){

            for(int col=start_col; col<=end_col; col++){
                ans.push_back(a[start_row][col]);
            }
            start_row++;

            for(int row=start_row; row<=end_row; row++){
                ans.push_back(a[row][end_col]);
            }
            end_col--;

            for(int col=end_col; col>=start_col; col--){
                ans.push_back(a[end_row][col]);
            }

            end_row--;

            for(int row=end_row; row>=start_row; row--){
                ans.push_back(a[row][start_col]);
            }
            start_col++;

    }
        vector<int> res(ans.begin(),ans.begin()+m*n);
        return res;
    }
        
};