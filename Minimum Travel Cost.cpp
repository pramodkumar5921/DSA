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
    if(subtree[ru]>subtree[rv]){
        parent[rv]=ru;
        subtree[ru]+=subtree[rv];
    }
    else{
         parent[ru]=rv;
        subtree[rv]+=subtree[ru];
    }
}

vector<vector<int>> findMST(vector<vector<int>> &road, int n, int m){
   vector<int>parent(n+1,0);
   for(int i=1;i<=n;i++){
       parent[i]=i;
   }
   vector<int>subtree(n+1,1);
//    sort(road.begin(),road.end(),cmp);
vector<vector<int>>res;
for(int i=0;i<road.size();i++){
 vector<int>temp=road[i];
 reverse(temp.begin(),temp.end());
 res.push_back(temp);
}
sort(res.begin(),res.end());
vector<vector<int>>ans;
for(int i=0;i<res.size();i++){
    int ru=findparent(res[i][1],parent);
    int rv=findparent(res[i][2],parent);
    if(ru!=rv){
        combine(res[i][1],res[i][2],parent,subtree);
        vector<int>temp=res[i];
        reverse(temp.begin(),temp.end());
        ans.push_back(temp);
    }
}
return ans;
}
