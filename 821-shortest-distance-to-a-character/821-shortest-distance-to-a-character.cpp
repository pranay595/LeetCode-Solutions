class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> indices;
        for(int i=0;i<n;i++){
            if(s[i]==c)
                indices.push_back(i);
        }
        
        vector<int> ans(n,0);
        int m = indices.size();
        for(int i=0;i<n;i++){
            if(s[i]!=c){
                int dist = INT_MAX;
                for(int j=0;j<m;j++){
                    dist = min(dist,abs(i-indices[j]));
                    ans[i]=dist;
                }
            }
        }
        
        return ans;
    }
};