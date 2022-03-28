class Solution {
public:
    bool isIncreasing(vector<int>& nums,int n){
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i])
                return false;
        }
        return true;
    }
    
    bool isDecreasing(vector<int>& nums,int n){
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i])
                return false;
        }
        return true;
    }
    
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        return isIncreasing(nums,n) || isDecreasing(nums,n);
    }
};