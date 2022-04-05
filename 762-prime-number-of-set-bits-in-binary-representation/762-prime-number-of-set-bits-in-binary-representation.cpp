class Solution {
public:
    int countBits(int n){
        if(n==0)
            return 0;
        int count = 0;
        while(n){
            if(n&1)
                count++;
            n=n>>1;
        }
        return count;
    }
    
    bool isPrime(int n){
        if(n==1)
            return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
                return false;
        }
        return true;
    }
    
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i=left;i<=right;i++){
            int temp = countBits(i);
            if(isPrime(temp))
                count++;
        }
        return count;
    }
};