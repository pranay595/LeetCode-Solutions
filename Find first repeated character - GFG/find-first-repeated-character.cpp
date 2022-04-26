// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    unordered_set<char> st;
    string ans;
    for(int i=0;i<s.size();i++){
        if(st.count(s[i])){
            ans.push_back(s[i]);
            return ans;
        }
        else
        st.insert(s[i]);
    }
    return to_string(-1);
}