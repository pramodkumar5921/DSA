#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n=7;
    priority_queue<long long,vector<long long>,greater<int>>pq;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
    }
    long long maxi=*max_element(v.begin(),v.end());
    vector<long long>ans;
    int cnt=0;
    long long sum=0;
    while(pq.size()>0){
        if(cnt==2){
            break;
        }
        sum+=pq.top();
        ans.push_back(pq.top());
        pq.pop();
        cnt++;
    }
    long long ele=maxi-(sum);
    ans.push_back(ele);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
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
