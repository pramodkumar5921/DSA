#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
void solve(){
    int n,idx,m;
    cin>>n>>idx>>m;
    vector<pair<long long,long long>>temp(m);
    for(int i=0;i<m;i++){
        cin>>temp[i].first>>temp[i].second;
    }
    int start=idx;
    int last=idx;
    for(int i=0;i<m;i++){
        int a=temp[i].first;
        int b=temp[i].second;
        if(b<start or last<a){
            continue;
        }
        else{
            start=min(start,a);
            last=max(b,last);
        }
    }
    cout<<last-start+1<<endl;
    return ;
}
int main(){
    fast();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
