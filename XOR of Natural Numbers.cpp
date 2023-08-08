#include<bits/stdc++.h>
using namespace std;
void solve(){
    int  n;
    cin>>n;
    int cnt=n%4;
    if(cnt==0){
        cout<<n<<endl;
        return;
    }
    if(cnt==3){
        cout<<0<<endl;
        return;
    }
    if(cnt==2){
        cout<<n+1<<endl;
        return;
    }
    if(cnt==1){
        cout<<1<<endl;
        return;
    }
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
