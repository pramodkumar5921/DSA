#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    vector<pair<long long,long long>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    if(v.size()<=1){
        cout<<0<<endl;
        return;
    }
    vector<long long>x,y;
    for(int i=0;i<n;i++){
        x.push_back(v[i].first);
        y.push_back(v[i].second);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    long long sum=0;
    long long ans=0;
    for(int i=0;i<n;i++){
        ans+=x[i]*i-sum;
        sum+=x[i];
    }
    sum=0;  
    for(int i=0;i<n;i++){
        ans+=y[i]*i-sum;
        sum+=y[i];
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
