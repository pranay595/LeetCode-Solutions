class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            ++mp[nums[i]];
        }
        int a = 0;
        int b = 0;
        int c = 0;
        for(auto i:mp){
            if(i.first==0)
                a = i.second;
            else if(i.first==1)
                b = i.second;
            else
                c = i.second;
        }
        
        int i=0;
        
        while(a && i<n){
            nums[i]=0;
            a--;
            i++;
        }
        
        while(b && i<n){
            nums[i]=1;
            b--;
            i++;
        }
        
        while(c && i<n){
            nums[i]=2;
            c--;
            i++;
        }
    }
};