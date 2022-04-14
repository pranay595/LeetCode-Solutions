class Solution {
public:
    bool helper(int row, int col, vector<vector<char>>& board){
        unordered_set<char> st;
        
        for(int i=row;i<row+3;i++){
            for(int j=col;j<col+3;j++){
            char curr = board[i][j];
            if(curr!='.'){    
            if(st.count(curr))
                return false;
            st.insert(curr);
                }
            }
        }
        
        return true;
    }
    
    
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> st;
        
        for(int i=0;i<9;i++){
            st.clear();
            for(int j=0;j<9;j++){
                char curr = board[i][j];
                if(curr!='.'){
                    if(st.count(curr))
                        return false;
                    st.insert(curr);
                }
            }
        }
        
         for(int i=0;i<9;i++){
            st.clear();
            for(int j=0;j<9;j++){
                char curr = board[j][i];
                if(curr!='.'){
                    if(st.count(curr))
                        return false;
                    st.insert(curr);
                }
            }
        }
        
         for(int i=0;i<9;i+=3){
            st.clear();
            for(int j=0;j<9;j+=3){
                if(!helper(i,j,board))
                    return false;
            }
        }
            return true;
    }
};