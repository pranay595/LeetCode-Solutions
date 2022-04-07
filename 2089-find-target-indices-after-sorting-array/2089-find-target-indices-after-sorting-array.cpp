class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int  n = nums.size();
        sort(nums.begin(),nums.end());
        
        int st = 0;
        int end = n-1;
        
        vector<int> ans;
        
//         while(st<=end){
//             int mid = st + (end-st)/2;
//             if(nums[mid]==target)
//                 ans.push_back(mid);
//             else if(nums[mid]>target)
                
//         }
        
        for(int i=0;i<n;i++){
            if(nums[i]==target)
                ans.push_back(i);
        }
        
        return ans;
    }
};