#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,int n,int target){
    int i=0,j=n;
    int ans=-1;
    while(i<j){
        int mid=i+(j-i)/2;
        if(arr[mid]==target){
            ans=mid+1;
            i=mid+1;
        }
        else if(arr[mid]>target){
            ans=mid;
            j=mid;
        }
        else{
            ans=mid+1;
            i=mid+1;
        }
    }
    if(i<n and arr[i]<=target){
        i++;
        return i;
    }
    return ans;
}
int main(){
    int n=9;
    vector<int>arr={0,0,3,5,6,78,89,98,100};
    cout<<solve(arr,n,101)<<endl;
    return 0;
}
