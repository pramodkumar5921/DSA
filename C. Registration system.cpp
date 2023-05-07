#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    unordered_map<string,long long>mp;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        if(mp.find(str)!=mp.end()){
            long long cnt=mp[str];
            string temp=to_string(cnt);
            mp[str]++;
            str+=temp;
            cout<<str<<endl;
        }
        else{
            cout<<"OK"<<endl;
            mp[str]++;
        }
    }
    return 0;
}
