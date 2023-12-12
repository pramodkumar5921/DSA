#include<bits/stdc++.h>
using namespace std;
const int mi=1e9+7;
const int n=(2*1e5);
vector<long long>fact(n+1,1);
long long mod(long long x){
    return ((x%mi+mi)%mi);
}
long long multiply(long long a,long long b){
    return mod(mod(a)*mod(b));
}
long long power(long long a,long long n){
    long long res=1;
    while(n>0){
        if(n%2==1){
            res=multiply(res,a);
            n--;
        }
        a=multiply(a,a);
        n=n/2;
    }
    return res;
}
long long inverse(long long a,long long n){
    return power(a,n);
}
long long div1(long long a,long long b){
    return multiply(a,inverse(b,mi-2));
}
void solve(){
    long long n,m;
    cin>>n>>m;
    cout<<div1(fact[2*m+n-1],multiply(fact[n-1],fact[2*m]))<<'\n';
    return;
}
int main(){
    int t;
    cin>>t;
    for(int i=2;i<=n;i++){
        fact[i]=multiply(fact[i-1],i);
    }
    while(t--){
        solve();
    }
    return 0;
}
