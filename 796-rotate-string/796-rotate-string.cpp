class Solution {
public:
    bool rotateString(string s, string goal) {
        bool a = false;
        
        string str = s+s;
        int num = str.find(goal);
        
        return s.size()==goal.size() && num!=string::npos;
    }
};