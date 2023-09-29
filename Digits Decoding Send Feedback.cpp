#include<bits/stdc++.h>
using namespace std;
int const mod = 1e9+7;
// int solve(int idx,string seq,vector<int>&dp){
// }
int decodingDigits(string seq){
//    if(seq.empty()) return 0;
       if(seq[0]=='0'){
             return 0;
         }
   seq = '$'+seq;
   vector<int>dp(seq.size()+1);
   dp[0]=1;
    dp[1]=1;
    int n=seq.size();
    for(int i=2;i<n;i++){
         dp[i] = 0;
        if(seq[i]!='0'){
            dp[i] = dp[i-1];
        }
        int num  = (int)(seq[i-1]-'0')*10 + (int)(seq[i]-'0');
        if(num>=10 and num<=26){
            dp[i] = (dp[i]%mod +  dp[i-2]%mod)%mod;
        }
     }
    return dp[n-1];
}
