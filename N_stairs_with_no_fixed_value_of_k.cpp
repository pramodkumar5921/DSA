#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Nstairs(int n,int k){
    // basecase
    if(n==0){
        return 1;
    }

    if(n<0){
        return 0;
    }
    // recursive case
    int flag=0;
    for( int i=1;i<=k;i++){
        flag = flag + Nstairs(n-i,k);
    }
   return flag;
}
int main(){
    int n ,k;
    cin>>n;
    cin>>k;
    int ans=Nstairs(n,k);
    cout<<ans<<endl;
    return 0;
}
