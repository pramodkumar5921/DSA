#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<long long>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    long long mini1=*min_element(a.begin(),a.end());
    long long mini2=*min_element(b.begin(),b.end());
    long long ans=0;
    for(int i=0;i<n;i++){
        long long ele1=a[i]-mini1;
        long long ele2=b[i]-mini2;
        ans+=max(ele1,ele2);
    }
    cout<<ans<<endl;
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
