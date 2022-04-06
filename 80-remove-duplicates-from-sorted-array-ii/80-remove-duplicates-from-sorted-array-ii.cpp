class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            ++mp[nums[i]];
        }
        
        int st = 0;
        for(auto i:mp){
            if(i.second==1){
                nums[st]=i.first;
                st++;
            }
            if(i.second>1){
                nums[st]=i.first;
                st++;
                nums[st]=i.first;
                st++;
            }
        }
        sort(nums.begin(),nums.begin()+st);
        return st;
    }
};