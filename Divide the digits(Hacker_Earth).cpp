#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    vector<long long>v;
    while(n>0){
        v.push_back(n%10);
        n=n/10;
    }
    sort(v.begin(),v.end());
    priority_queue<long long,vector<long long>,greater<int>>pq1;
    priority_queue<long long,vector<long long>,greater<int>>pq2;
    for(int i=0;i<v.size();i++){
        if(i%2==0){
        pq1.push(v[i]);
      }
        else{
            pq2.push(v[i]);
        }
    }
    long long num1=0,num2=0;
    while(pq1.size()>0){
        num1=(long long)num1*10+pq1.top();
        pq1.pop();
    }
    while(pq2.size()>0){
        num2=(long long)num2*10+pq2.top();
        pq2.pop();
    }
    cout<<num1+num2<<endl;
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
