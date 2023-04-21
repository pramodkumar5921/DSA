#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int ans=1;
    if(s[0]=='?'){
        ans=9;
    }
    if(s[0]=='0'){
        cout<<0<<endl;
        return ;
        
    }
    for(int i=1;i<s.size();i++){
        
        if(s[i]=='?'){
            ans=ans*10;
        }
       
    }
    cout<<ans;
    cout<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
