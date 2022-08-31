#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    // basecase of the function
    if(n==0||n==1){
        return n;
    }
    // int chotiproblem1=fibo(n-1);
    // int chotiproblem2=fibo(n-2);
    // int badiproblem=chotiproblem1+chotiproblem2;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    cout<<fibo(11)<<endl;
    return 0;
}
