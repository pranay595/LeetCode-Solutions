class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size()-1;
        int ans = 0;
        while(n>=0){
            if(s[n]!=' '){
                ++ans;
            }
            else if(s[n]==' ' && ans>0)
                return ans;
            
                n--;
            
        }
        
        return ans;
    }
};