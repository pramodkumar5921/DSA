#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int stairs(int n){
    // basecase
    if(n==0){
        return 1;
    }

    if(n<0){
        return 0;
    }
    // recursive case
    return stairs(n-1)+stairs(n-2)+stairs(n-3);
}
int main(){
   int n;
   cin>>n;
   int ans=stairs(n);
   cout<<ans<<endl;
    return 0;
}
