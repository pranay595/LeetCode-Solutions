class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> sol;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<s.size();i++){
            if((s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57))
                sol.push_back(s[i]);
        }
        
        int i = 0;
        int j = sol.size()-1;
        
        while(i<=j){
            cout<<s[i]<<" "<<s[j];
            if(sol[i]!=sol[j]){
                return false;
            }
                i++;
                j--;
        }
        
        return true;
        
    }
};