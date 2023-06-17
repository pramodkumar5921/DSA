#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int>v(10);
    v[0]=0;
    for(int i=1;i<10;i++){
        cin>>v[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        int x=str[i]-'0';
        int y=v[x];
        char ch=y+'0';
        if(y>x){
            str[i]=ch;
            cnt=1;
        }
        else if(x>y and cnt==1){
            break;
        }
    }
    cout<<str<<endl;
    return 0;
}
