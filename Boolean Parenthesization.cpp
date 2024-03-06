//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    const int mod=1003;
public:
    int dp[201][201][2];
    int solve(string &s,int i,int j,bool isTrue){
        if(i>j){
            return true;
        }
        if(i==j){
            if(isTrue==true){
                return s[i]=='T';
            }
           return s[i]=='F';
        }
        if(dp[i][j][isTrue]!=-1){
            return dp[i][j][isTrue];
        }
        int ans=0;
        for(int k=i+1;k<j;k=k+2){
            int lf=solve(s,i,k-1,false);
            int lt=solve(s,i,k-1,true);
            int rf=solve(s,k+1,j,false);
            int rt=solve(s,k+1,j,true);
            
            if(s[k]=='&'){
                if(isTrue==true){
                    ans=(ans)%mod+(lt*rt)%mod;
                }
                else{
                    ans=(ans)%mod+(lf*rf)%mod+(lt*rf)%mod+(lf*rt)%mod;
                }
            }
            else if(s[k]=='|'){
                if(isTrue==true){
                    ans=(ans)%mod+(lt*rt)%mod+(lt*rf)%mod+(lf*rt)%mod;
                }
                else{
                     ans=ans%mod+(lf*rf)%mod;
                }
            }
            else{
                if(isTrue==true){
                     ans=ans%mod+(lf*rt)%mod+(lt*rf)%mod;
                }
                else{
                     ans=ans%mod+(lf*rf)%mod+(lt*rt)%mod;
                }
            }
        }
        return dp[i][j][isTrue]=ans%1003;
    }
    int countWays(int n, string s){
        memset(dp,-1,sizeof(dp));
        int ans=solve(s,0,n-1,true);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.countWays(n, s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
