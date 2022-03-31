class Solution {
public:
    int setBits(int n){
        if(n<=0)
            return 0;
        return (n%2==0 ? 0:1)+setBits(n/2);
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(setBits(i));
        }
        return ans;
    }
};