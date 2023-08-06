#include<bits/stdc++.h>
const int mod=(1e9+7);
vector<long long int>v(3001,-1);
long long int countDerangements(int n) {
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(v[n]!=-1){
        return v[n];
    }
    // recusrive case
    long long ans=((n-1)%(mod))*((countDerangements(n-1))%(mod)+ (countDerangements(n-2))%mod);
    return v[n]=ans%mod;
}
