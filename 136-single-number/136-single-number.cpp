class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++){
            a=a^nums[i];
        }
        return a;
    }
};