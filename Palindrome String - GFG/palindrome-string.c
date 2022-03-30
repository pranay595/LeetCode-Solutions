// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

int isPalindrome(char S[])
{
    // Your code goes here
    int n = strlen(S);
    int st = 0;
    int end = n-1;
    
    while(st<=end){
        if(S[st]!=S[end])
            return 0;
        
        st++;
        end--;
    }
    
    return 1;
}

// { Driver Code Starts.

int main() 
{
   	int t;
   	scanf("%d", &t);
   	while(t--)
   	{
   		char s[100000];
   		scanf("%s", s);


   		printf("%d\n", isPalindrome(s));
   	}

    return 0;
}  // } Driver Code Ends