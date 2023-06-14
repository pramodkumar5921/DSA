#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string s;
    cin>>s;
    priority_queue<pair<long long,long long>>pq1;
    priority_queue<pair<long long,long long>>pq0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            pq1.push({arr[i],i});
        }
        if(s[i]=='0'){
            pq0.push({arr[i],i});
        }
    }
    long long cnt=*max_element(arr.begin(),arr.end());
    vector<long long>ans(n);
    while(pq1.size()>0){
        pair<long long,long long>res=pq1.top();
        long long idx=res.second;
        ans[idx]=cnt;
        cnt--;
        pq1.pop();
    }
    while(pq0.size()>0){
        pair<long long,long long>res=pq0.top();
        long long idx=res.second;
        ans[idx]=cnt;
        cnt--;
        pq0.pop();
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
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
