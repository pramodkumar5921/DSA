#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<long long>arr(n,0);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<long long>prefix(n,0);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1]+arr[i];
    }
    long long first=0;

    for(int i=1;i<k;i++){
        first = first + arr[i]*i - prefix[i-1];
    }
    long long ans = first;
    long long sum = prefix[k-1]-arr[0];
    int j=0;
    for(int i=k;i<n;i++){
        long long cnt = first + arr[i]*(k-1)*1ll - sum;
        cnt = cnt - (sum - arr[j]*(k-1));
        j++;
         ans = min(ans,cnt);
         first = cnt;
         sum += arr[i];
         sum = sum-arr[j];
    }
    cout<<ans<<endl;
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
