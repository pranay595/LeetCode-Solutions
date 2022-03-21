class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> ans(nums.size()+1,0);
        int sol;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(int i=0;i<=nums.size();i++){
            if(ans[i]>=2){
                sol = i;
            }
        }
        return sol;
    }
};