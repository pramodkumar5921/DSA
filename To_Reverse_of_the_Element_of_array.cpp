#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printarray(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}
void reversearray(int *a,int n){
    for(int i=n-1;i>=0;i--){
        cout<<*(a+i)<<" ";
    }
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    printarray(a,n);
    reversearray(a,n);
    return 0;
}
