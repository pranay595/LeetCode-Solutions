class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                st.push(s[i]);
            
            else if(!st.empty() && s[i]==')'){
                char tp = st.top();
                if(tp =='(')
                    st.pop();
                else
                st.push(s[i]);
            }
            
            else if(!st.empty() && s[i]==']'){
                char tp = st.top();
                if(tp=='[')
                    st.pop();
                else
                st.push(s[i]);
            }
            
            else if(!st.empty() && s[i]=='}'){
                char tp = st.top();
                if(tp=='{')
                    st.pop();
                else
                st.push(s[i]);
            }
            else
                st.push(s[i]);
            
        }
        
        return st.empty();
    }
};