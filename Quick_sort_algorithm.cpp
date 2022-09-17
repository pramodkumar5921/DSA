#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int *a,int s,int e){
    int i=s-1;
    for(int j=s;j<=e-1;j++){
        if(a[e]>=a[j]){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}
void quicksort(int *a,int s,int e){
    // basecase
    if(s>=e){
        return;
    }
    int p=partition(a,0,e);
    // recursive case
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}
int main(){
    int a[]={2,8,7,1,5,3,4};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
