#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<pair<int,int>>arr(3);
    for(int i=0;i<3;i++){
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    long long  x1=arr[0].first;
    long long y1=arr[0].second;
    long long x2=arr[1].first;
    long long y2=arr[1].second;
    long long x3=arr[2].first;
    long long y3=arr[2].second;

    long long ans=(x3-x2)*(y2-y1)-(y3-y2)*(x2-x1);
    if(ans==0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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
