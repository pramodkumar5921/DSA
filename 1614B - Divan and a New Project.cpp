#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    vector<long long>temp(n);
    for(int i=0;i<n;i++){
        cin>>temp[i];
    }
    vector<long long>v(n);
    priority_queue<pair<long long,long long>>pq;
    for(int i=0;i<n;i++){
        pq.push({temp[i],i});
    }
    int cnt=0;
    long long pos=2,neg=0;
    while(pq.size()>0){
        pair<long long,long long>res=pq.top();
        int idx=res.second;
        if(cnt%2==0){
            v[idx]=pos;
            pos++;
        }
        else{
            v[idx]=neg;
            neg--;
        }
        cnt++;
        pq.pop();
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        ans=ans+abs(v[i]-1)*temp[i];
    }
    cout<<ans*2<<endl;
    cout<<1<<" ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
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
