#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
     vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val;
    int i=0;
    int maxi=INT_MAX;int idx=-1;
    while(i<n){
        int cnt=0;
        val=arr[i];
        for(int j=i+1;j<n;j++){
            val+=k;
            if(val!=arr[j]){
                cnt++;
            }
        }
        val=arr[i];
        for(int j=i-1;j>=0;j--){
            val=val-k;
            if(val<=0){
                cnt=INT_MAX;
                break;
            }
            else if(arr[j]!=val){
                cnt++;
            }
        }
        if(maxi>cnt){
            maxi=cnt;
            idx=i;
        }
        i++;
    }
    cout<<maxi<<endl;
    val=arr[idx];
    for(int i=idx+1;i<n;i++){
        val+=k;
        if(arr[i]<val){
            cout<<"+"<<" "<<i+1<<" "<<abs(val-arr[i])<<endl;
        }
        else if(val<arr[i]){
            cout<<"-"<<" "<<i+1<<" "<<abs(arr[i]-val)<<endl;
        }
    }
    val=arr[idx];
    for(int i=idx-1;i>=0;i--){
        val=val-k;
        if(arr[i]>val){
            cout<<"-"<<" "<<i+1<<" "<<abs(arr[i]-val)<<endl;
        }
        else if(val>arr[i]){
            cout<<"+"<<" "<<i+1<<" "<<abs(val-arr[i])<<endl;
        }
    }
    return 0;
}
