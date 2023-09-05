#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
vector<vector<long long>>prod(vector<vector<long long>>&res,vector<vector<long long>>&temp,int n){
    vector<vector<long long>>v(2,vector<long long>(2,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                 long long cnt = (res[i][k]%mod * temp[k][j]%mod)%mod;
                 v[i][j] = (v[i][j]%mod + cnt%mod)%mod;
            }
        }
    }
    return v;
}
long long fib(long long n){
    if(n<=2){
        return 1;
    }
    long long p=n-2;
    vector<vector<long long>>res={{1,0},{0,1}};
    vector<vector<long long>>temp={{1,1},{1,0}};
    while(p>0){
        if(p%2==1){
            res = prod(res,temp,2);
            p--;
        }
        p=p/2;
        temp = prod(temp,temp,2);
    }
    long long ans=(res[0][0]%mod+res[0][1]%mod)%mod;
    return ans;
}
void solve(){
    long long n,m;
    cin>>n>>m;
    long long ans1=fib(n+1)-1;
    long long ans2=fib(m+2)-1;
    long long res = ((ans2%mod)-(ans1%mod)+mod)%mod;
    cout<<res<<'\n';
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
