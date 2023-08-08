#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    int mask=(1<<i)-1;
     int ans=mask&n;
     cout<<ans<<endl;
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
