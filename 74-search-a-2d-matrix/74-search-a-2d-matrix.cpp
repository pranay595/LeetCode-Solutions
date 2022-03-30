class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        
        int row = 0;
        int col = matrix[0].size()-1;
        
        while(row<rows && col>=0){
            int curr = matrix[row][col];
            if(curr==target)
                return true;
            if(curr<target)
                row++;
            else
                col--;
        }
        return false;
    }
};