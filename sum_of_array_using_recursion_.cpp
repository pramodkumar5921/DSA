#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int *a,int n){
    // basecase
    if(n==0){
        return 0;
    }
    // recursive case
    int chotiproblem=sum(a+1,n-1);
    return a[0]+chotiproblem;
}
int sum1(int *a,int n,int i){
    if(i==n){
        return 0;
    }
    return a[i]+sum1(a,n,i+1);
}
int sum2(int*a,int n){
    // basecase
    if(n==0){
        return 0;
    }
    // recursive case
    int chotu=sum2(a,n-1);
    return a[n-1]+chotu;

}
int main(){
    int a[]={1,3,4,5,6,7};
    int n=sizeof(a)/sizeof(int);
    int ans=sum(a,n);
    int tcs=sum1(a,n,0);
    int pcs=sum2(a,n);
    cout<<pcs<<endl;
    cout<<tcs<<endl;
    cout<<ans;
    return 0;
}
