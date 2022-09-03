#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int i=1;
bool isLucky(int n){
    i++;
    if(n<i){
    return true;
    }
    return (n%i!=0) && isLucky(n-(n/i));
            
        }

int main(){
    int n;
    cin>>n;
    bool ans = isLucky(n);
        if(ans==true){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    
    return 0;
}
