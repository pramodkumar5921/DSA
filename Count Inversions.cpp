
#include<bits/stdc++.h>
using namespace std;
long long  merge(long long arr[],int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    long long total=0;
    vector<int>left(len1);
    vector<int>right(len2);
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k++];
        
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k++];
    }
    int idx1=0,idx2=0;
     k=s;
    while(idx1<len1 and idx2<len2){
        if(left[idx1]<=right[idx2]){
            arr[k++]=left[idx1++];
           
        }
        else{
            arr[k++]=right[idx2++];
            total+=(len1-idx1);
        }
    }
    while(idx1<len1){
        arr[k++]=left[idx1++];
    }
    while(idx2<len2){
        arr[k++]=right[idx2++];
       
    }
    return total;
}
long long mergesort(long long arr[],int s,int e){
    if(s>=e){
        return 0;
    }
    long long total=0;
    int mid=s+(e-s)/2;
    total+=mergesort(arr,s,mid);
    total+=mergesort(arr,mid+1,e);
    total+=merge(arr,s,e);
    return total;
} 
long long getInversions(long long *arr, int n){
 return mergesort(arr,0,n-1);
}
