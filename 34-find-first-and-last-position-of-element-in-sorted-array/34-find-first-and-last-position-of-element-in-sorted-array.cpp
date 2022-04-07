class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        if(n==1 && nums[0]==target){
            return {0,0};
        }
        
        int st = 0;
        int end = n-1;
        
        vector<int> ans;
        
        int first = -1;
        
        while(st<=end){
            int mid = st + (end-st)/2;
            if(nums[mid]==target){
                first = mid;
                end = mid-1;
            }
            else if(nums[mid]>target)
                end = mid-1;
            else
                st = mid+1;
            
        }
        
        st = 0;
        end = n-1;
        int second = -1;
        
        while(st<=end){
             int mid = st + (end-st)/2;
            if(nums[mid]==target){
                second = mid;
                st = mid+1;
            }
            else if(nums[mid]>target)
                end = mid-1;
            else
                st = mid+1;
            
        }
        return {first,second};
    }
};