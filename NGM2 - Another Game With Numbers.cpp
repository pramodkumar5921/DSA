#include<bits/stdc++.h>
using namespace std;
long long calculate(long long a,long long b){
    if(a==0){
        return b;
    }
    return (a*b)/__gcd(a,b);
}
int main(){
    int n,k;
    cin>>n>>k;
    long long res=0;
    vector<int>arr(k,0);
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    for(int mask=1;mask<(1<<k) ; mask++){
        long long lcm=0;
        int cnt=0;
        for(int i=0;i<15;i++){
            if(mask & (1<<i)){
                lcm=calculate(lcm,arr[i]);
                cnt++;
            }
        }
        if(cnt%2==1){
            res += (n)/lcm;
        }
        else{
            res -= (n)/lcm;
        }
    }
    cout<<n-res<<'\n';
    return 0;
}
