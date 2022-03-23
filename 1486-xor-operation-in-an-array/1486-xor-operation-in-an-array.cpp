class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        int ans = start;
        for(int i=1;i<n;i++){
            ans=ans^(start+(2*i));
        }
        return ans;
    }
};