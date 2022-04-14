class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_set<int> st;
        int n = matrix.size();
        
        for(int i=0;i<n;i++){
            st.clear();
            for(int j=0;j<n;j++){
                int curr = matrix[i][j];
                if(st.count(curr))
                    return false;
                st.insert(curr);
            }
        }
        
         for(int i=0;i<n;i++){
            st.clear();
            for(int j=0;j<n;j++){
                int curr = matrix[j][i];
                if(st.count(curr))
                    return false;
                st.insert(curr);
            }
        }
        
        return true;
    }
};