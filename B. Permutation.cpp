#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        st.insert(ele);
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(st.find(i)==st.end()){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
