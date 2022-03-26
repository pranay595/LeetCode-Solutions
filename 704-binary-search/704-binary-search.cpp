class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size();
        
        while(st<end){
            int mid = st + (end-st)/2;
            
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<target)
                st = mid+1;
            else
                end = mid;
                
        }
        return -1;
    }
};