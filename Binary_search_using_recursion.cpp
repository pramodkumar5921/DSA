#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Binarysearch(int *a,int s,int e,int key){
    // basecase
    if(s>e){
        return -1;
    }
    // recursive case
    int mid=s+(e-s)/2;
    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]>key){
        return Binarysearch(a,s,mid-1,key);
    }
    else{
        return Binarysearch(a,mid+1,e,key);
    }
}

int main(){
    int key;
    cin>>key;
    int a[]={3,5,6,7,8,34,67,90};
    int n=sizeof(a)/sizeof(int);
    int ans=Binarysearch(a,0,n-1,key);
    if(ans==-1){
        cout<<"key is  not found"<<endl;
    }
    else{
        cout<<"key is found=>"<<ans;
    }
    return 0;
}
