class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int st = 0;
        int end = n-1;
        int countSt = 0;
        int countEnd = 0;
        
        while(st<=end){
            if(s[st]==s[end]){
                st++;
                end--;
            }
            else{
                st++;
                countSt++;
            }
            if(countSt>1)
                break;
        }
        
        st = 0;
        end = n-1;
        
         while(st<=end){
            if(s[st]==s[end]){
                st++;
                end--;
            }
            else{
                end--;
                countEnd++;
            }
            if(countEnd>1)
                break;
        }
        
        if(countSt<=1 || countEnd<=1) 
            return true;
        
        return false;
    }
};