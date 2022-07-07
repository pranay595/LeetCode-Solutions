class Solution {
public:
    int getSum(int a, int b) {
        if(a>=0 && b>=0){
            for(int i=0;i<b;i++){
                a++;
            }
            return a;
        }
        if(a>=0 && b<0){
            for(int i=b;i<0;i++){
                a--;
            }
            return a;
        }
        if(a<0 && b>=0){
             for(int i=0;i<b;i++){
                a++;
            }
            return a;
        }
        
        else{
            for(int i=b;i<0;i++){
                a--;
            }
            return a;
        }
    }
};