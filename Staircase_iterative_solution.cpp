#include<bits/stdc++.h>
using namespace std;
# define endl '\n'
const int mod = 1e9+7;
// long long count(long long n,vector<long long>&dp){
//     if(n==0){
//         return 1LL;
//     }
//     if(n<0){
//         return 0LL;
//     }
//     if(dp[n]!=-1){
//         return dp[n%mod];
//     }
//     return dp[n]= (count(n-1,dp)%mod+count(n-2,dp)%mod+count(n-3,dp)%mod)%mod;
// }
void solve(){
    long long n;
    cin>>n;
    vector<long long>dp(n+3,-1);
    dp[n]=1;
    dp[n+1]=0;
    dp[n+2]=0;
    for(int i=n-1;i>=0;i--){
        dp[i] = (dp[i+1]%mod+dp[i+2]%mod+dp[i+3]%mod)%mod;
    }
    cout<<dp[0]%mod<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
