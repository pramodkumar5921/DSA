#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sorted(int *a, int n,int i){
    // basecase
    if(i==n-1){
        return;
    }
    // recursive case
    for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    sorted(a,n,i+1);
    return;
}
int main(){
    int a[]={3,56,6,9,7,1,2};
    int n= sizeof(a)/sizeof(int); 
    sorted(a,n,0);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
