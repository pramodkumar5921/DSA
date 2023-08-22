#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int number(int d,int n){
    long long cnt=0;
    long long m=d;
    while(n/d>0){
        cnt = cnt + n/d;
        d = d*m;
    }
    return cnt;
}
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n+1,0);
    for(int i=2;i*i<=n;i++){
        if(arr[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                arr[j]=1;
            }
        }
    }
    vector<int>prime;
    for(int i=2;i<arr.size();i++){
        if(arr[i]==0){
            prime.push_back(i);
        }
    }
    long long res=1;
    for(int i=0;i<prime.size();i++){
        int num=number(prime[i],n);
        res = ((res % mod)* (num+1)%mod)%mod;
    }
    long long ans = res%(mod);
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
