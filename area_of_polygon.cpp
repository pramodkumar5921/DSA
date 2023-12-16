#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        int x1=arr[i].first;
        int y1=arr[i].second;
        int x2=arr[(i+1)%n].first;
        int y2=arr[(i+1)%n].second;

        ans =  ans + (long long)(y2+y1)*(x2-x1);
    }
   

    // ans = ans + (long long)(y2+y1)*(x2-x1);
    ans = abs(ans);
    long long res=ans/2;
    cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
