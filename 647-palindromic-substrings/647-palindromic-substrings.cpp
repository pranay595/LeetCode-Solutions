class Solution {
public:
    bool isPalindrome(string s){
        int st = 0;
        int end = s.size()-1;
        
        while(st<=end){
            if(s[st]!=s[end])
                return false;
            else{
                st++;
                end--;
            }
        }
        return true;
    }
    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;
        
        
        for(int i=0;i<n;i++){
            string res = "";
            for(int j=i;j<n;j++){
                res += s[j];
                if(isPalindrome(res))
                    count++;
            }
        }
        
        return count;
    }
};