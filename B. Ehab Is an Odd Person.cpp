#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long>temp(n);
    for(int i=0;i<n;i++){
        cin>>temp[i];
    }
    vector<long long>parity(n);
    for(int i=0;i<n;i++){
      if(temp[i]%2==0){
        parity[i]=0;
      }
     else{
        parity[i]=1;
     }
    }
    unordered_set<long long>st;
    for(auto it:parity){
        st.insert(it);
    }
    int cnt=0;
    if(st.size()==1){
        for(int i=0;i<n;i++){
            cout<<temp[i]<<" ";
        }
        cnt++;
    }
    sort(temp.begin(),temp.end());
    if(cnt==0){
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    }
    return 0;
}
