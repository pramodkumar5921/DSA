#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,num;
    cin>>n>>num;
    vector<int>a(n+1,0),b(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    int maxi=INT_MIN;
    int ans=-1;
    for(int i=1;i<=n;i++){
      if(i-1+a[i]<=num){
        if(maxi<b[i]){
            maxi=b[i];
            ans=i;
        }
      }
    }
    cout<<ans;
    cout<<endl;
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
