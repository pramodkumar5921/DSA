#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long>num(n+1);
    vector<string>s(n+1);
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s[i]=str;
        int ele;
        cin>>ele;
        num[i]=ele;
    }
    multiset<string>st[101];
    for(int i=0;i<n;i++){
        st[num[i]].insert(s[i]);
    }
    set<int,greater<int>>marks(num.begin(),num.end());
    for(auto x:marks){
        for(auto y:st[x]){
            cout<<y<<" "<<x;
            cout<<endl;
      }
    }
    return 0;
}
