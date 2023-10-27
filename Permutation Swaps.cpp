#include<bits/stdc++.h>
using namespace std;

int findparent(int x,vector<int>&parent){
    if(x==parent[x]){
        return x;
    }
    return parent[x]=findparent(parent[x],parent);
}
void combine(int u, int v,vector<int>&parent,vector<int>&subtree){
    int ru=findparent(u,parent);
    int rv=findparent(v,parent);
    if(ru==rv){
        return;
    }
    if(subtree[ru]>subtree[rv]){
        subtree[ru]+=subtree[rv];
        parent[rv]=ru;
    }
    else{
        subtree[rv]+=subtree[ru];
        parent[ru]=rv;
    }
}
void solve(){
     int n,m;
     cin>>n>>m;
     vector<int>arr1(n+1,0);
     vector<int>arr2(n+1,0);
     for(int i=1;i<=n;i++){
         cin>>arr1[i];
     }
     for(int i=1;i<=n;i++){
         cin>>arr2[i];
     }
    //  vector<int>vis(n+1,0)
    vector<int>parent(n+1,0);
    for(int i=1;i<=n;i++){
        parent[i]=i;
    }
    vector<int>subtree(n+1,1);
     for(int i=0;i<m;i++){
         int u,v;
         cin>>u>>v;
         combine(arr1[u],arr1[v],parent,subtree);
     }
     bool temp=true;
    for(int i=1;i<=n;i++){
        if(arr1[i]==arr2[i]){
            continue;
        }
        int ru=findparent(arr1[i],parent);
        int rv=findparent(arr2[i],parent);

        if(ru==rv){
            continue;
        }
        else{
            temp=false;
            break;
        }
    }
     if(temp==true){
         cout<<"YES"<<endl;
         return;
     }
     cout<<"NO"<<endl;
     return;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
