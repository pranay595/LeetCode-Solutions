// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int killer(int n,int k){
    if(n==1)
        return 0;
    
   return (killer(n-1,k)+k)%n;
    
}

int josephus(int n, int k)
{
   //Your code here
       return killer(n,k)+1;
   
}

// { Driver Code Starts.

int main() {
	
	int t;
	scanf("%d", &t);//testcases
	while(t--)
	{
		int n,k;
		scanf("%d%d", &n, &k);//taking input n and k
		
		//calling josephus() function
		printf("%d\n", josephus(n,k));
	}
	return 0;
}  // } Driver Code Ends