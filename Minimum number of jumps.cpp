//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
        int minimumjumps(int arr[],int n){
        // code here
        // pramod kumar code
        int dp[n+1];
        dp[0]=0;
        for(int i=1;i<n;i++){
            dp[i]=INT_MAX;
        }
        for(int i=1;i<n;i++){
            // dp[i]=INT_MAX;
            for(int j=0;j<i;j++){
                if(arr[j]+j>=i and dp[j]!=INT_MAX){
                    dp[i]=min(dp[i],dp[j]+1);
                    // break;
                }
            }
        }
        if(dp[n-1]==INT_MAX){
            return -1;
        }
        return dp[n-1];
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;    
        cout<<ob.minimumjumps(arr,n)<<endl;    // Function to calculate minimum number of jumps
    }
    return 0;
}

// } Driver Code Ends
