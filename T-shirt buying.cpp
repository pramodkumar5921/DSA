#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>price(n),a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int m;
    cin>>m;
    vector<int>c(m);
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    set<int>s[4];
    for(int i=0;i<n;i++){
        s[a[i]].insert(price[i]);
        s[b[i]].insert(price[i]);
    }
    for(int i=0;i<m;i++){
        int cnt=0;
        cnt=*s[c[i]].begin();
        for(int j=1;j<=3;j++){
            s[j].erase(cnt);
        }
        if(cnt){
            cout<<cnt<<" ";
        }
        else{
            cout<<-1<<" ";
        }
}
return 0;
}
