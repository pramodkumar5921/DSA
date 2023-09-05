#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long power(long long a,long long n,long long m){
    long long res = 1;
    while(n>0){
        if(n&1){
             if(res>1e8+1){
            return res;
         }
            if(res<=1e8+1){
            res = res*a;
            }
            n--;
        }
        if(res>=1e8+1){
            return res;
        }
        if(a<=1e8+1){
           a = a*a; 
        }
        n = n/2;
    }
    return res;
}
int main(){
    int n,m;
    cin>>n>>m;
    long long res = power(2,n,m);
    long long ans = m%res;
    cout<<ans<<'\n';
    return 0;
}   
