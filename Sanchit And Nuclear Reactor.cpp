#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,m;
    cin>>n>>m;
    long long k=n/m;
    long long cnt=n%m;
    long long  ans=1;
    if(k%2== 1){
        ans=m-1;
    }
    for(int i=1;i<=cnt;i++){
        ans = (ans%m*i%m)%m;
    }
    cout<<ans%m<<'\n';
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
