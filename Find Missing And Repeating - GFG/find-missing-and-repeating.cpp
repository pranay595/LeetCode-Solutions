// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        unordered_map<int,int> mp;
        
        int k = 1;
        for(int i=0;i<n;i++){
            ++mp[arr[i]];
            if(k==arr[i])
                k++;
        }
        
        for(auto i:mp){
            if(i.second>1){
                arr[0]=i.first;
                break;
                }
        }
        
        
        arr[1]=k;
        
        return arr;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends