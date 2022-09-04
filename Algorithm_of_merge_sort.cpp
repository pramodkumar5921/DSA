#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int *a,int*b,int*c,int s,int e){
    int mid = (s+e)/2;

    int i=s,j=mid+1,k=s;
    while(i<=mid and j<=e){
        if (b[i]<c[j]){
            a[k]=b[i];
            k++;i++;
        }
        else{
            a[k]=c[j];
            k++;j++;
        }
    }
    while(i<=mid){
        a[k]=b[i];
        k++;i++;
    }
    while(j<=e){
        a[k]=c[j];
        k++;j++;
    }

}
void mergesort(int *a,int s,int e){
    // basecase
    if(s>=e){
        return;
    }
    // recursive case
    // 1.Divide 
    int mid=(s+e)/2;
    int b[100],c[100];
    for(int i=s;i<=mid;i++){
        b[i]=a[i];
    }
    for(int i=mid+1;i<=e;i++){
        c[i]=a[i];
    } 
    // 2. sort
    mergesort(b,s,mid);
    mergesort(c,mid+1,e);
    //3. merge
    merge(a,b,c,s,e);
}
void printarray(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[]={8,2,7,4,1,3};
    int n=sizeof(a)/sizeof(int);
    printarray(a,n);
    mergesort(a,0,n-1);
    printarray(a,n);
    return 0;
}
