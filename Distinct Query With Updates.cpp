#include<bits/stdc++.h>
using namespace std;
const int BLK_SZ=1000;
typedef struct Q{
    int l,r,t,idx;
    Q(){
        l=r=t=idx=0;
    }
}Q;
int get_block(int i){
    return (i/BLK_SZ);
}
bool cmp(Q &a , Q&b){
    if(get_block(a.l)!=get_block(b.l)){
        return a.l<b.l;
    }
    else if(get_block(a.r)!=get_block(b.l)){
        return a.r<b.r;
    }
    return a.t<b.t;
}
int ans=0;
unordered_map<int,int>freq;
void add(int x){
    if(freq[x]==0){
        ans++;
        freq[x]++;
    }
    else{
        freq[x]++;
    }
}
void remove(int x){
    if(freq[x]==1){
        ans--;
        freq[x]--;
    }
    else{
        freq[x]--;
    }
}
vector < int > distinctQueryWithUpdates(int n, int q, vector < int > & num,
 vector < vector < int >> & query) {
vector<pair<int,pair<int,int>>>updates;
vector<Q>queries;
int num_updates=0;
for(int i=0;i<q;i++){
    int type=query[i][0];
    if(type==1){
        int l=query[i][1];
    int r=query[i][2];
        l--;r--;
    Q curr_query;
    curr_query.l=l;
    curr_query.r=r;
    curr_query.t=num_updates;
    curr_query.idx=queries.size();
    queries.push_back(curr_query);
    }
    else{
        int idx=query[i][1];
        int val=query[i][2];
        idx--;
        updates.push_back({idx,{val,-1}});
        num_updates++;
    }
}
sort(queries.begin(),queries.end(),cmp);
int b[n];
for(int i=0;i<n;i++){
    b[i]=num[i];
}
for(int i=0;i<updates.size();i++){
    int index=updates[i].first;
    int val=updates[i].second.first;
    updates[i].second.second=b[index];
    b[index]=val;
}
int L=queries[0].l;
int R=L-1;
int timestamp=-1;
int num_queries=queries.size();
// int query_ans[num_queries];
vector<int>query_ans(num_queries,0);
for(int i=0;i<num_queries;i++){
    int index=queries[i].idx;
    int l=queries[i].l;
    int r=queries[i].r;
    int t=queries[i].t;
    while(R<r){
        R++;
        add(num[R]);
    }
    while(R>r){
        remove(num[R]);
        R--;
    }
    while(L<l){
        remove(num[L]);
        L++;
    }
    while(L>l){
        L--;
        add(num[L]);
    }
    while(timestamp<t){
        timestamp++;
       if(timestamp<updates.size()){
        int up_index=updates[timestamp].first;
        int new_val=updates[timestamp].second.first;
        int old_val=updates[timestamp].second.second;
       if (up_index >= L and up_index <= R) {
           remove(old_val);    
        }
         num[up_index]=new_val;
        if (up_index >= L and up_index <= R) {
             add(new_val);
        }
       }
    }
    while(timestamp>t){
       if(timestamp<updates.size()){
        int up_index=updates[timestamp].first;
        int new_val=updates[timestamp].second.second;
        int old_val=updates[timestamp].second.first;
        if (up_index >= L and up_index <= R) {
          remove(old_val);
        }
        num[up_index]=new_val;
         if (up_index >= L and up_index <= R) {
             add(new_val);
        }
       }
    }
    query_ans[index]=ans;
}
return query_ans;
}
