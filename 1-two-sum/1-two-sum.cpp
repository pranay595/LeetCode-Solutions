class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=1;j<n;j++){
                if(target==(nums[i]+nums[j]) && i!=j)
                    a = {i,j};
            }
        }
        return a;
    }
};