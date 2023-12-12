#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long ncr(long long n, long long r, long long num, long long den){
    if(r == 0)
        return num / den;

    if(n == r)
        return 1;

    num *= n;
    den *= r;

    int gc = __gcd(num, den);
    num /= gc;
    den /= gc;

    return ncr(n - 1, r - 1, num, den);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,r;
        cin>>n>>r;
        n=n-r;
        cout << ncr(n+r-1, min(n, n+r-1- n) , 1, 1) << '\n';
    }
    return 0;
}

