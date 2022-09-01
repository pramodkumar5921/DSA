#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkno(int *arr,int n,int k){
  //basecase
   if(n==0){
        return false;
    }
    // recursive case
    if(arr[0]==k){
        return true;
    }
    bool ch=checkno(arr+1,n-1,k);
    return ch;
    
}
int main(){
    int k;
    cin>>k;
    int arr[]={1,4,5,6,7};
    
     bool ans = checkno(arr,5,k);
     if(ans==true){
        cout<<"yes";
     }
     else{
        cout<<"No";
     }
    return 0;
}
