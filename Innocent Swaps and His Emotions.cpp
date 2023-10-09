#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
 vector<long long >fac(1e6+1);
 long long mod(long long x){
     return (x%m+m)%m;
 }
 long long multiply(long long a,long long b){
     return  mod(mod(a)*mod(b));
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
     return  res;
 }
 long long inverse(long long a,long long n){
     return power(a,n);
 }
 long long division(long long a,long long b){
     return multiply(a,inverse(b,m-2));
 }
int main(){
    int t;
    cin>>t;
      fac[0]=1;
        for(int i=1;i<=1e6;i++){
            fac[i]=multiply(fac[i-1],i);
        }
    while(t--){
        int n,r;
        cin>>n>>r;
        long long ans1=division(fac[n],multiply(fac[n-r],fac[r]));
        long long ans2=power(2,r);
        cout<<multiply(ans1,ans2)<<endl;
    }
    return 0;
}
