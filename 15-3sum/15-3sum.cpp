class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        if(n<=2)
            return {};
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<n-2;i++){
               if( i==0 || (i>0 && nums[i]!=nums[i-1])){ 
                int st = i+1;
                int end = n-1;

                while(st<end){
                    if(nums[i]==-(nums[st]+nums[end])){
                        vector<int> temp = {nums[i],nums[st],nums[end]};
                        ans.push_back(temp);

                        while(st<end && nums[st]==nums[st+1])
                            st++;
                        while(st<end && nums[end]==nums[end-1])
                            end--;

                        st++;
                        end--;
                    }

                    else if(-nums[i]<(nums[st]+nums[end])){
                        end--;
                    }
                    else
                        st++;
                }
               }
        }
        
        return ans;
    }
};