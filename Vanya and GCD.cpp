#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int dp[501][501][101];
int solve(int idx,int pre,int g,vector<int>&arr){
    // base case
    if(idx<0){
        if(g==1){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(dp[idx][pre][g]!=-1){
        return dp[idx][pre][g]%mod;
    }
    int include=0;
     int exclude = solve(idx-1,pre,g,arr);
    if (pre == arr.size() || arr[idx] < arr[pre]) {
      include = solve(idx - 1,idx,__gcd(g,arr[idx]),arr);
    }
    return dp[idx][pre][g]=(include+exclude)%mod;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    memset(dp,-1,sizeof(dp));
    int ans = solve(n-1,n,0,arr);
    cout<<ans<<endl;
    return 0;
}
