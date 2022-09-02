#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int add(int a, int b){
    // basecase
    if(b==0){
        return 0;
    }
    // recursive case
    int ch=add(a,b-1);
    int badi=a+ch;
    return badi;
}

int main(){
    int a,b;
    cin>>a>>b;
    int  ans = add(a,b);
    cout<<ans<<" ";
    return 0;
}
