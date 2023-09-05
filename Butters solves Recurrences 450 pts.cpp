#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
vector<vector<long long>>prod(vector<vector<long long>>&a,vector<vector<long long>>&b){
    vector<vector<long long>>res(2,vector<long long>(2,0));
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                long long cnt = (a[i][k]%mod*b[k][j]%mod)%mod;
                res[i][j] = (res[i][j]%mod +cnt%mod)%mod;
            }
        }
    }
    return res;
}
long long fib(long long n){
    vector<vector<long long>>temp={{2,3},{1,0}};
    vector<vector<long long>>res={{1,0},{0,1}};
    while(n>0){
        if(n%2==1){
            res = prod(res,temp);
            n--;
        }
        temp=prod(temp,temp);
        n=n/2;
    }
    return res[0][0];
}
void solve(){
    long long n;
    cin>>n;
    long long ans=fib(n-1);
    cout<<ans<<'\n';
    return;
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
