#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int size = n+1;
    vector<long long>fact(size,1);
    for(int i=1;i<size;i++){
        fact[i] = (fact[i-1])*i;
    }
    cout<<((fact[n]/fact[n/2]/fact[n/2])*(fact[n/2-1]*fact[n/2 - 1]))/2<<endl;
   return 0;    
}
