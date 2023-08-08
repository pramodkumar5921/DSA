#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long l;
    cin>>l;
    long long r;
    cin>>r;
    long long ans=l;
    for(int i=0;i<64;i++){
        if((ans&(1LL<<i))==0){
            if(ans+(1LL<<i)<=r){
                ans=ans+(1LL<<i);
            }
            else{
                break;
            }
        }
      
    }
    cout<<ans<<'\n';
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
