class Solution {
public:
    int fibonacci(int n){
        if(n<=1)
            return n;
        return fibonacci(n-1)+fibonacci(n-2);
    }
    int fib(int n) {
        int sum=0;
        sum+=fibonacci(n);
        return sum;
        
    }
};