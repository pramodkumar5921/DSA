#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    long long ans=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            ans = ans * (i-1);
            ans=ans/i;
            
        }
    }
    if(n>1){
       ans = ans * (n-1);
       ans = ans / n;
    }
    
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
