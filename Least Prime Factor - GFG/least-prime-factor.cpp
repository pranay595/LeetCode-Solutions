// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  bool isPrime(int n){
      if(n==1)
          return false;
      
      for(int i=2;i*i<=n;i++){
          if(n%i==0)
              return false;
      }
      return true;
  }
  int leastPrime(int n){
      if(n<4)
          return n;
      
      for(int i=2;i<=n/2;i++){
          if(n%i==0 && isPrime(i))
              return i;
      }
      return n;
      
  }
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int> ans;
        ans.push_back(1);
        for(int i=1;i<=n;i++){
            ans.push_back(leastPrime(i));
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}
  // } Driver Code Ends