//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[101][101];
    int solve(int arr[],int N,int i,int j){
        if(i>=j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=INT_MAX;
        for(int k=i;k<j;k++){
            int cost1=solve(arr,N,i,k);
            int cost2=solve(arr,N,k+1,j);
            int cost3=arr[i-1]*arr[k]*arr[j];
            
            int total=cost1+cost2+cost3;
            
            ans=min(ans,total);
        }
        return dp[i][j]=ans;
    }
    int matrixMultiplication(int N, int arr[]){
        memset(dp,-1,sizeof(dp));
        int ans=solve(arr,N,1,N-1);
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
