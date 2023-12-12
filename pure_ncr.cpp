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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
        #endif
        long long n,r;
        cin>>n>>r;
        if(r>n){
            cout<<0;
            return 0;
        }

        cout << ncr(n, min(r, n - r) , 1, 1) << '\n';
    
    return 0;
}

