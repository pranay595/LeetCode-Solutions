class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int sum = 0;
        for(int i=0;i<m;i++){
            sum+=rolls[i];
        }
        int remSum = mean*(m+n)-sum;
        
        if(remSum<n || remSum>6*n){
            return {};
        }
        
        vector<int> ans(n,remSum/n);
       int remender = remSum%n;
        for(int i=0;i<remender;i++){
            ++ans[i];
        }
        return ans;
    }
};