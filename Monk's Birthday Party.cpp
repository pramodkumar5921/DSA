#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    set<string>st;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        st.insert(str);
    }
    for(auto it:st){
        cout<<it<<" ";
        cout<<endl;
    }
    return ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
