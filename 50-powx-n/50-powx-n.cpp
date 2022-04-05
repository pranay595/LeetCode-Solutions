class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n<0){
            x=1/x;
        }
        while(n){
            if((n&1)!=0)
                ans=ans*x;
            x=x*x;
            n=n/2;
        }
        return ans;
    }
};