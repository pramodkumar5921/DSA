#include<bits/stdc++.h>
using namespace std;
long long gcd(int a,int b){
    if(b==0){
        return a;
    }
    if(a==0){
        return b;
    }
    return gcd(b,a%b);
}
long long gcdSum(int n){
   long long sum=0;
   for(int i=1;i<=n;i++){
       for(int j=i+1;j<=n;j++){
           sum+=(gcd(i,j));
       }
   }
   return sum;
}
