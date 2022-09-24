#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n==2){
        return true;
    }
    for(int i=2;i*i<=(n);i++){
        if(n%i==0){
            return false;
        }
    }
    
        return true;
    }

int main(){
    int n;
    cin>> n;
    // bool ans=isprime(n);
    // if(ans==true){
    //     cout<<"number is prime ";

    // }
    // else{
    //     cout<<"number is not prime";
    // }
    for(int i=2;i<n;i++){
        if(isprime(i)==true){
            cout<<i<<" ";
        }
    }
    return 0;
}
