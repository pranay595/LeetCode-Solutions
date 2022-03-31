// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int n = nums.size();
        
        int a = nums[0];
        
        
        for(int i=1;i<n;i++){
            a^=nums[i];
        }
        
        int rightSetBit = (a & ~(a-1));
        
        int first = 0;
        int second = 0;
        
        for(int i=0;i<n;i++){
            if((nums[i] & rightSetBit) !=0)
                first^=nums[i];
            else
                second^=nums[i];
        }
        // cout<<first<<endl;
        // cout<<second<<endl;
        if(first<second)
            return {first,second};
        return {second,first};
        
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends