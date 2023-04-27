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
bool iscomposite(int num){
    int prime=0;
    int com=0;
    vector<int>factor;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            factor.push_back(i);
        }
    }
    factor.push_back(num);
    for(int i=0;i<factor.size();i++){
        if(isprime(factor[i])==true){
            prime++;
        }
        else{
            com++;
        }
    }
    if(prime<=com){
        return true;
    }
    return false;
}
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int product=1;
    for(auto it:a){
        product=product*it;
    }
    int k=0;
    vector<int>b;
    for(int i=1;i<=product;i++){
        if(iscomposite(i)==true){
            b.push_back(i);
            k++;
        }
    }
    cout<<k<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
