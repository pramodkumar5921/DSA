#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int parition(vector<int>&temp,int s,int e){
    int pivot=temp[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(temp[i]<=pivot){
            cnt++;
        }
    }
    int pivotidx=s+cnt;
    swap(temp[pivotidx],temp[s]);
    int i=s,j=e;
    while(i<pivotidx and j>pivotidx){
        while(temp[i]<=pivot){
            i++;
        }
        while(temp[j]>pivot){
            j--;
        }
        if(i<pivotidx and j>pivotidx){
            swap(temp[i++],temp[j--]);
        }

    }
    return pivotidx;
}
void quicksort(vector<int>&temp,int s,int e){
    if(s>e){
        return;
    }
    int p=parition(temp,s,e);
    quicksort(temp,s,p-1);
    quicksort(temp,p+1,e);
    return;
}
int main(){
    int n=9;
    vector<int>temp={3,4,2,1,0,5,2,9,10};
    quicksort(temp,0,n-1);
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}
