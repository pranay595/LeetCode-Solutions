class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;
        for(int i=1;i<n;i++){
            int pick = nums[i] + prev2;
            int notPick = prev;
            int curri = max(pick,notPick);
            prev2 = prev;
            prev = curri;
        }
        return prev;
    }
};