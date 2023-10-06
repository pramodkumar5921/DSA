#include<bits/stdc++.h>
using namespace std;
int findparent(int x,vector<int>&parent){
    if(x==parent[x]){
        return x;
    }
    return parent[x]=findparent(parent[x],parent);
}
void combine(int u,int v,vector<int>&parent,vector<int>&subtree){
    int ru=findparent(u,parent);
    int rv=findparent(v,parent);
    if(ru==rv){
        return;
    }
    if(subtree[rv]>subtree[ru]){
        parent[ru]=rv;
        subtree[rv]+=subtree[ru];
    }
    else{
        parent[rv]=ru;
        subtree[ru]+=subtree[rv];
    }
}
bool identicalSentences(vector<string> word1, vector<string> word2, vector<vector<string>> pairs, int n, int m, int p) {
   unordered_map<string ,int>mp;
   int cnt=1;
   for(int i=0;i<pairs.size();i++){
       string u=pairs[i][0];
       string v=pairs[i][1];
        if(mp.find(u)==mp.end()){
            mp[u]=cnt;
            cnt++;
        }
        if(mp.find(v)==mp.end()){
            mp[v]=cnt;
            cnt++;
        }
   }
   vector<int>parent,subtree;
   parent.resize(cnt+1);
    for(int i=1;i<=cnt;i++){
        parent[i]=i;
    }
    subtree.resize(cnt+1,1);
    for(int i=0;i<pairs.size();i++){
        int u=mp[pairs[i][0]];
        int v=mp[pairs[i][1]];
        combine(u,v,parent,subtree);
    }
    if(n!=m){
        return false;
    }
    for(int i=0;i<word1.size();i++){
        if(word1[i]==word2[i]){
            continue;
        }
        string u1=word1[i];
        string u2=word2[i];
        if(mp.find(u1)!=mp.end() and mp.find(u2)!=mp.end()){
            if(findparent(mp[u1],parent)!=findparent(mp[u2],parent)){
                return false;
            }
        }
        else {
                return false;
        }
    }
    return true;
}
