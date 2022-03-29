class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        int a = 0;
        int b = 0;
        int c = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                a++;
            else if(nums[i]==1)
                b++;
            else
                c++;
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