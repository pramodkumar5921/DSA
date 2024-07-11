//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int dp[101][101];
    int solve(int arr[],int idx,int n){
        if(idx>=n){
            return 0;
        }
        if(dp[idx][n]!=-1){
            return dp[idx][n];
        }
        int ans=1e9;
        for(int k=idx;k<n;k++){
            int temp1=solve(arr,idx,k);
            int temp2=solve(arr,k+1,n);
            int temp3=arr[idx-1]*arr[k]*arr[n];
            ans=min(ans,temp1+temp2+temp3);
        }
        return dp[idx][n]=ans;
    }
    int matrixMultiplication(int N, int arr[]){
        memset(dp,-1,sizeof(dp));
      int ans=solve(arr,1,N-1);
      return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends
