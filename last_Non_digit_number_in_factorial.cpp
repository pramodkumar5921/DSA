#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    // basecase
    if(n==0 or n==1){
        return 1;
    }
    // recursive case 
    int ch=solve(n-1);
    int ba=n*ch;
    return ba;
}

int main(){
    int n;
    cin>>n;
    int ans=solve(n);
    cout<<ans<<endl;
    if(ans%10==0){
        int p=ans/10;
        cout<< p%10;
    }
    else{
        cout<< ans%10;
    }
    return 0;
}
