class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> mp;
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            ++mp[nums[i]];
        }
        for(auto i:mp){
            if(i.second==1){
                sum+=i.first;
            }
        }
        return sum;
    }
};