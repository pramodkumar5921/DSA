#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 10000007;
long long power(long long a,long long n){
    long long res=1;
    while(n>0){
        if(n&1){
            res = (a%mod*res%mod)%mod;
            n--;
        }
        a = (a%mod*a%mod)%mod;
        n = n/2;
    }
    return res;
}
void solve(long long n,long long k){
    long long ans1 = (power(n,n)%mod + power(n,k)%mod)%mod;
    long long ans2 = (2%mod * power(n-1,k)%mod)%mod + (2%mod*power(n-1,n-1)%mod)%mod;
    long long ans  = (ans1%mod + ans2%mod)%mod;
    cout<<ans<<'\n';
    return;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    do{
        cin>>n>>k;
        if(n>0)
        solve(n,k);
    }
    while(n!=0);
    return 0;
}  
