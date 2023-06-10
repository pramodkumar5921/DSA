#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&temp,int s,int e){
    int mid=(e+s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    vector<int>left(len1);
    vector<int>right(len2);
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=temp[k++];
        // k++;
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=temp[k++];
    }
    int idx1=0,idx2=0;
     k=s;
    while(idx1<len1 and idx2<len2){
        if(left[idx1]<right[idx2]){
            temp[k++]=left[idx1++];
            // k++;idx1++;
        }
        else{
            temp[k++]=right[idx2++];
            // k++;idx2++;
        }
    }
    while(idx1<len1){
        temp[k++]=left[idx1++];
        // idx1++;k++;
    }
    while(idx2<len2){
        temp[k++]=right[idx2++];
        // k++;idx2++;
    }
}
void mergesort(vector<int>&temp,int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    mergesort(temp,0,mid);
    mergesort(temp,mid+1,e);
    merge(temp,s,e);
}
int main(){
    int n=7;
    vector<int>temp={1,6,7,8,3,2,4};
    mergesort(temp,0,n-1);
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}
