class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        
        for(int i=0;i<n;i++){
            ++mp[nums[i]];
        }
        
        nums.clear();
        for(auto i:mp){
            if(i.second==1){
                nums.push_back(i.first);
            }
            if(i.second>1){
                nums.push_back(i.first);
                nums.push_back(i.first);
            }
        }
        
        return nums.size();
    }
};