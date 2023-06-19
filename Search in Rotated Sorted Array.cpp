#include<bits/stdc++.h>
int findlargestelement(int arr[],int n){
    int i=0,j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(mid-1>=0 and mid+1<=n and  arr[mid+1]<arr[mid] and arr[mid-1]<arr[mid]){
            return mid;
        }
        else if(mid==0 and mid+1<=n and arr[mid+1]<arr[mid]){
            return mid;
        }
        else if(mid==n-1 and mid-1>=0 and arr[mid-1]<arr[mid]){
            return mid;
        }
        else if(arr[mid]>=arr[i]){
            i=mid+1;
        }
        else {
            j=mid-1;
        }
    }
    return -1;
}
int search(int* arr, int n, int key) {
    if(n==1 and arr[0]==key){
        return 0;
    }
    else if(n==1 and arr[0]!=key){
        return -1;
    }
    int pivotidx=findlargestelement(arr,n);
    int i=0,j=pivotidx;
    int ans=-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(arr[mid]==key){
            ans=mid;
            return ans;
        }
        else if(arr[mid]>key){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    int s=pivotidx+1,l=n-1;
    while(s<=l){
        int mid=(l-s)/2+s;
        if(arr[mid]==key){
            ans=mid;
            return ans;
        }
        else if(arr[mid]>key){
            l=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
