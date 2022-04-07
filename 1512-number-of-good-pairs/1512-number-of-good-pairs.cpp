class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            count+=mp[nums[i]]++;
        }
        
        return count;
    }
};