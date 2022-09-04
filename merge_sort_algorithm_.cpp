// mergsort.cpp
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void  mergsort(int a[],int b[],int c[],int n,int m){
    int i=0,j=0,k=0;
    while(i<n and j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;k++;
        }
        else{
            c[k]=b[j];
            j++;k++;
        }
    }
    while(i<n){
        c[k]=a[i];
        k++;i++;
    }
    while(j<m){
        c[k]=b[j];
        k++;j++;
    }
    return;
}
int main(){
    int a[]={2,4,6,7,8};
    int b[]={1,5,9,56,67,90,89};
    int c[100];
    int n=sizeof(a)/sizeof(int);
    int m=sizeof(b)/sizeof(int);
    mergsort(a,b,c,n,m);
    for(int i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
        return 0;
}
