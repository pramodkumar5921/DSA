#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r;
    cin>>n>>r;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int cnt=0;
    while(i<n){
        int pos=-1;
        for(int j=min(n-1,i+r-1);j>=max(0,i-r+1);j--){
            if(arr[j]==1){
                pos=j;
                break;
            }
        }
        if(pos==-1){
            cout<<-1<<endl;
            return 0;
        }
        cnt++;
        i=pos+r;
    }
    cout<<cnt<<endl;
    return 0;
}
