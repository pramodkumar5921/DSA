#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool issorted(int *a,int n){
    // basecase
    if(n==1||n==0){
        return true;
    }
  // recursive case
    bool chotasortedhai=issorted(a+1,n-1);
    if(chotasortedhai==true and a[0]<=a[1]){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a[]={1,4,5,6,8,0};
    int n=sizeof(a)/sizeof(int);
    bool ans = issorted(a,n);
    if(ans==true){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
