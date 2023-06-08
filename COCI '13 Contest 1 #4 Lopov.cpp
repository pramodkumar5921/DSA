#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<long long,long long>&a,pair<long long,long long>&b){
    if(a.second>b.second){
        return true;
    }
    else if(a.second==b.second){
        return a.first<b.first;
    }
    return false;
}
int main(){
    long long n,k;
    cin>>n>>k;
    vector<pair<long long,long long>>items(n);
    for(int i=0;i<n;i++){
        cin>>items[i].first>>items[i].second;
    }
    vector<long long>cap(k);
    for(int i=0;i<k;i++){
        cin>>cap[i];
    }
    sort(items.begin(),items.end(),cmp);
    long long total=0;
    multiset<long long>ms;
    for(int i=0;i<k;i++){
        ms.insert(cap[i]);
    }
    for(int i=0;i<n;i++){
     if(ms.size()==0){
        break;
     }
     auto itr=ms.lower_bound(items[i].first);
     if(itr==ms.end()){
        continue;
     }
     total+=items[i].second;
     ms.erase(itr);
    }
    cout<<total<<endl;
    return 0;
}   
