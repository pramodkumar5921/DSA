#include<bits/stdc++.h>
using namespace std;
void solve(){
     long long  n;
     cin>>n;
      vector<pair<long long,long long>>temp(n);
     for(int i=0;i<n;i++){
         cin>>temp[i].first>>temp[i].second;
     }
    vector<long long>health(n),bomb(n);
    for(int i=0;i<n;i++){
        health[i]=temp[i].first;
    }
    for(int i=0;i<n;i++){
       bomb[i]=temp[i].second;
    }
    vector<long long>post_donation(n);
    for(int i=0;i<=n-1;i++){
         long long temp=(health[(i+1)%n]-bomb[i]);
        // 0 converted into long long  so do 0LL.
        post_donation[(i+1)%n]=max(0LL , temp);
    }
    long long total=0;
    for(int i=0;i<n;i++){
        total+=post_donation[i];
    }
  
    long long ans=2e18;
    for(int i=0;i<n;i++){
        long long bullets=health[i]+(total-post_donation[i]);
        ans=min(ans,bullets);
    }
    cout<<ans<<endl;
    return ;
}
int main(){
    long long  t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
