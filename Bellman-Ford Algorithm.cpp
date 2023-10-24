#include<bits/stdc++.h>
using namespace std;


struct Edge{
    int a;
    int b;
    int w;
};
const int inf=1e9;
const int N=1e5+1;
Edge edges[N+1];
void solve(){
    int n,m;
    cin>>n>>m;
    int src,dest;
    cin>>src>>dest;
    for(int i=1;i<=m;i++){
        cin>>edges[i].a>>edges[i].b>>edges[i].w;
    }
    vector<int>distance(n+1,1e9);
    distance[src]=0;
    for(int i=1;i<n;i++){
        bool flag=false;
        for(int j=1;j<=m;j++){
            int a=edges[j].a;
            int b=edges[j].b;
            int w=edges[j].w;
            if((distance[a]!=inf) and (distance[b]>distance[a]+w)){
                distance[b]=distance[a]+w;
                flag=true;
            }
        }
        if(flag==false){
            break;
        }
    }
    cout<<distance[dest]<<endl;
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
