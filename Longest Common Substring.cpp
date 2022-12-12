//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        // pramod kumar
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++){
            dp[i][0]=0;
    }
        for(int j=0;j<m+1;j++){
            dp[0][j]=0;
        }
        int max=0;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(S1[i-1]==S2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<m+1;j++){
                if(dp[i][j]>max){
                    max=dp[i][j];
                }
            }
        }
        return max;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
