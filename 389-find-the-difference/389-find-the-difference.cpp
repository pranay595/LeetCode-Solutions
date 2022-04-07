class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch='a';
        int sum1 =0;
        int sum2 = 0;
        for(int i=0;i<s.size();i++){
            sum1+=s[i];
        }
        for(int i=0;i<t.size();i++){
            sum2+=t[i];
        }
        int st = 'a'-s[0];
        cout<<st<<endl;
        cout<<sum2-sum1<<endl;
        ch = sum2-sum1;
        
        return ch;
    }
};