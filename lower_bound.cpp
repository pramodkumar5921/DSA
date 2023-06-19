#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,int n,int target){
    int i=0,j=n-1;
    int ans=-1;
    while(i<j){
        int mid=i+(j-i)/2;
        if(arr[mid]==target){
            ans=mid;
            j=mid;
        }
        else if(arr[mid]>target){
            j=mid;
        }
        else{
            i=mid+1;
        }
    }
    if(i<n and arr[i]<target){
        i++;
        return i;
    }
    return ans;
}
int main(){
    int n=9;
    vector<int>arr={2,3,5,6,7,7,9,67,89};
    int idx=solve(arr,n,98);
    cout<<idx<<endl;
    return 0;
}
