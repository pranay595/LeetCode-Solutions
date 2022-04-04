// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public: 
    bool isPrime(int N){
        if(N==1)
            return 0;
        
        for(int i=2;i*i<=N;i++){
            if(N%i==0)
                return false;
        }
        return true;
    }
    
    long long int largestPrimeFactor(int N){
        // code here
        if(N==1)
            return 1;
        
        // if(isPrime(N))
        //     return N;
            
        for(int i=N/2;i>1;i--){
            if(N%i==0 && isPrime(i)){
                return i;
            }
        }
        return N;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends