class Solution {
public:
    int tribonacci(int n) {
        if(n==0 || n==1)
            return n;
        if(n==2)
            return 1;
        
        int first = 0;
        int second = 1;
        int third = 1;
        int triSum = 0;
        
        for(int i=3;i<=n;i++){
            triSum = first+second+third;
            first = second;
            second = third;
            third = triSum;
        }
        
        return triSum;
        
        // return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
};