class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        
        if(nums.size()==2){
            if(nums[0]>nums[1])
                return 0;
                return 1;
        }
        
        if(nums[0]>nums[1])
            return 0;
        
        if(nums[nums.size()-1]>nums[nums.size()-2])
            return nums.size()-1;
        int prev = 0;
        int curr = 1;
        int nxt = 2;
        
        int ans = curr;
        while(nxt<nums.size()){
        if(nums[curr]>nums[prev] && nums[curr]>nums[nxt]){
            ans = curr;
            break;
        }
        else{
            prev++;
            curr++;
            nxt++;
        }}
        return ans;
    }
};