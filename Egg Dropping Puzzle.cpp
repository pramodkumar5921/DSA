//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int dp[201][201];
    int solve(int egg,int flour){
        if(egg==1){
            return flour;
        }
        if(flour==0 || flour==1){
            return flour;
        }
        if(dp[egg][flour]!=-1){
            return dp[egg][flour];
        }
        int mn=INT_MAX;
        for(int k=1;k<=flour;k++){
            int temp=1+max(solve(egg-1,k-1),solve(egg,flour-k)); // worst case 
            mn=min(mn,temp); // minimum number of attemps
        }
        return dp[egg][flour]=mn;
    }
    int eggDrop(int egg, int flour){
        memset(dp,-1,sizeof(dp));
       int ans=solve(egg,flour);
       return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends
