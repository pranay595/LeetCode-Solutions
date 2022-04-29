// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> primeDivision(int N){
        // code here
        vector<bool> prime(N+1,true);
        vector<int> arr;
        for(int i=2;i*i<N;i++){
            if(prime[i]==true){
                for(int j=i*i;j<=N;j+=i)
                prime[j]=false;
            }
        }
        
        for(int i=2;i<=N;i++){
            if(prime[i] && prime[N-i]){
                return {i,N-i};
            }
        }
        return {};
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends