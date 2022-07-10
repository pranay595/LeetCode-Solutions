class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int m = bank[0].size();
        
        int count = 0;
        
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            int curr = 0;
            for(int j=0;j<m;j++){
                if(bank[i][j]=='1')
                    curr++;
            }
            if(curr==0) continue;
            ans.push_back(curr);
        }
        
        if(ans.size()==0 || ans.size()==1)
            return 0;
        
        for(int i=0;i<ans.size()-1;i++){
            count += ans[i]*ans[i+1];
        }
        return count;
    }
};