#include<bits/stdc++.h>
using namespace std;
long long inverse(long long a,long long b,long long &x,long long &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    long long x1,y1;
    long long g=inverse(b,a%b,x1,y1);
    x = y1;
    y = x1 - (a/b)*y1;
    return g;
}
long long numbersAndRemainders(int n, vector<int> &arr, vector<int> &rem)
{
    long long total = 1;
    for(int i=0;i<n;i++){
        total = total*arr[i];
    }
    long long product = total;
    long long ans = 0;
    for(int i=0;i<n;i++){
        if(rem[i] == 0){
            continue;
        }
        total = total/arr[i];
        long long x,y;
        inverse(total,arr[i],x,y);
        x = (x%arr[i]+arr[i])%arr[i];
        total = total*x;
        total = total*rem[i];
        ans = (ans%product + total%product)%product;
        // if(total==0){
        //     total=1;
        // }
         total =total*arr[i];
        total = total/x;
        total = total/rem[i];
        // total =total*arr[i];
    }
    return ans;
}
