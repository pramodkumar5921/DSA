#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int x,int n){
    // basecase
    if(n==0){
        return 1;
    }



    // recursive case
    int ch=power(x,n-1);
    int ba=x*ch;
    return ba;
}

int main(){
    int x,n;
    cin>>x>>n;
    cout<<power(x,n);
    
    return 0;
}
