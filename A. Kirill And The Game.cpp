#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long l,r,x,y,k;
    cin>>l>>r>>x>>y>>k;
    for(int i=x;i<=y;i++){
        long long temp=i*k;
        if(temp>=l and temp<=r){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
