class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        if(nums.size()==1)
            return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int diff = nums[n-1]-nums[0];
        int maxN = INT_MIN;
        int minN = INT_MAX;
         for(int i=1;i<n;i++){
            maxN=max(nums[i-1]+k,nums[n-1]-k);
            minN=min(nums[0]+k,nums[i]-k);
            diff=min(diff,maxN-minN);
        }
        return diff;
    }
};