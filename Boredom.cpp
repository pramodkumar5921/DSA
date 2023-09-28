#include<bits/stdc++.h>
using namespace std;
int calculate(int idx,vector<int>&freq,vector<int>&dp){
    if(idx<0){
        return 0;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    int exclude = calculate(idx-1,freq,dp);
    int include = idx*freq[idx] + calculate(idx-2,freq,dp);
    return dp[idx]=max(include,exclude);
}
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=-1;
    for(int i=0;i<arr.size();i++){
        m = max(m,arr[i]);
    }
    vector<int>freq(m+3,0);
    for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
    }
    vector<int>dp(m+1,-1);
    cout<<calculate(m,freq,dp)<<endl;
    return ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
