#include<bits/stdc++.h>
bool cmp(pair<int,int>&a,pair<int,int>&b){
    if(a.first<b.first){
        return true;
    }
    return false;
}
int calculateMinPatforms(int at[], int dt[], int n) {
    vector<pair<int,int>>time(n);
    for(int i=0;i<n;i++){
        time[i].first=at[i];
        time[i].second=dt[i];
    }
    sort(time.begin(),time.end(),cmp);
     int start=time[0].first,end=time[0].second;
     priority_queue<int,vector<int>,greater<int>>pq;
     pq.push(end);
     for(int i=1;i<n;i++){
         if(pq.top()<time[i].first){
             pq.pop();
             pq.push(time[i].second);
         }
         else{
             pq.push(time[i].second);
         }
     }
    
   return pq.size();
}
