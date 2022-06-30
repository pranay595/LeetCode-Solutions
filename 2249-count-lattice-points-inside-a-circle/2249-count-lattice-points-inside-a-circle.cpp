class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        int n = circles.size();
        set<pair<int,int>> st;
        
        for(int i=0;i<n;i++){
            int x = circles[i][0];
            int y = circles[i][1];
            int r = circles[i][2];
            
            for(int j=x-r;j<=x+r;j++){
                for(int k=y-r;k<=y+r;k++){
                    if((x-j)*(x-j) + (y-k)*(y-k) <=r*r)
                        st.insert({j,k});
                }
            }
        }
        return st.size();
    }
};