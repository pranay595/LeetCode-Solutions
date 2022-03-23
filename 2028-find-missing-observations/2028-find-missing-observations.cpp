class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int sum = 0;
        for(int i=0;i<m;i++){
            sum+=rolls[i];
        }
         sum = mean*(m+n)-sum;
        
        if(sum<n || sum>6*n){
            return {};
        }
        
        vector<int> ans(n,sum/n);
       int remender = sum%n;
        for(int i=0;i<remender;i++){
            ++ans[i];
        }
        return ans;
    }
};