#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    if(n&(1<<i)){
        n=n^(1<<i);
        cout<<n<<'\n';
    }
    else{
        cout<<n<<endl;
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
