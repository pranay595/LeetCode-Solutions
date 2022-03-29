// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int first = 0;
    int second = 0;
    int third = 0;
    
    for(int i=0;i<n;i++){
        if(a[i]==0)
            first++;
        else if(a[i]==1)
            second++;
        else
            third++;
    }
    
    int i=0;
    while(first){
        a[i]=0;
        first--;
        i++;
    }
    while(second){
        a[i]=1;
        second--;
        i++;
    }
    while(third){
        a[i]=2;
        third--;
        i++;
    }
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends