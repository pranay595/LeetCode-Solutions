class Solution {
public:
    int fib(int n) {
        if(n<=1)
            return n;
        
        int st = 0;
        int end = 1;
        int fibSum = 0;
        
        for(int i=2;i<=n;i++){
            fibSum = st+end;
            st = end;
            end = fibSum;
        }
        
        return fibSum;
        
    }
};