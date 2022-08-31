#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    // base case
    if(n==0){
        return 1;
    }
    // recursive ,factorial(n)=n*factorial(n-1)
    int chotaans=factorial(n-1);
    // pure assumption that recursion will give us the 
    // answer'
    int BadaAns=n*chotaans;
    return BadaAns;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
