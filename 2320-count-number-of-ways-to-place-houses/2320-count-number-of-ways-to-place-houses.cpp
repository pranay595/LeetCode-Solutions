class Solution {
public:
    int mod = 1e9+7;
    int countHousePlacements(int n) {
        if(n==1)
            return 4;
        long long int prev2 = 0;
        long long int prev = 1;
        long long int curri;
        
        for(int i=2;i<=n+2;i++){
            curri = prev%mod + prev2%mod;
            prev2 = prev%mod;
            prev = curri%mod;
        }
        
        return ((prev%mod) * (prev%mod))%mod;
    }
};