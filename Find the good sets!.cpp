#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int mod=1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=*max_element(arr.begin(),arr.end());
    vector<int>temp(maxi+1,0);
    for(int i=0;i<arr.size();i++){
        temp[arr[i]]=1;
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        int res=arr[i];
        for(int j=res*2;j<temp.size();j=j+res){
            if (temp[j] != 0) {
                temp[j] = (temp[j]%mod + temp[res]%mod)%mod;
            }
        }
    }
    long long ans=0;
    for(auto it:temp){
        ans = (ans%mod + it%mod)%mod ;
    }
    cout<<ans<<endl;
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
