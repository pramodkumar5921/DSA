//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}
// } Driver Code Ends


int minDeletions(string str, int n) { 
    //complete the function here 
    // pramod kumar
    string s;
    for(int i=0;i<str.size();i++){
        s.push_back(str[n-i-1]);
    }
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int i=0;i<=n;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(str[i-1]==s[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    // cout<<dp[n][n]<<endl;
    return str.size()-dp[n][n];
} 
