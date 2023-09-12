#include<bits/stdc++.h>
using namespace std;
int m;
unsigned long long mod(unsigned long long x){
    return ((x%m + m)%m);
}
unsigned long long multiply(unsigned long long a,unsigned long long b){
    return mod(mod(a)*mod(b));
}
unsigned long long inverse(unsigned long long a,unsigned long long n){
    unsigned long long res = 1;
    while(n>0){
        if(n%2==1){
            res = multiply(res,a);
            n--;
        }
        a = multiply(a,a);
        n = n/2;
    }
    return res;
}
unsigned long long divide(unsigned long long a,unsigned long long b){
    return multiply(a,inverse(b,m-2));
}
unsigned long long  fermatLittle(int n, int r, int p)
{
  vector<unsigned long long>fact(n+1,0);
  fact[0]=1;
   m=p;
  for(int i=1;i<=n;i++){
      fact[i] = multiply(fact[i-1],i);
  }
   return divide(fact[n],multiply(fact[n-r],fact[r]));
}
