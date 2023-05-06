#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        pq.push(ele);
    }
    int ans=0;
    while(pq.size()>0 and k>0){
        int top1=pq.top();
        ans+=top1;
        pq.pop();
        pq.push(top1/2);
        k--;
    }
    cout<<ans<<" ";
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
