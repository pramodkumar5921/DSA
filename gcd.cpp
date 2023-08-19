#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
void solve(){
    int x,y;
    cin>>x>>y;
    int ans=gcd(x,y);
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
