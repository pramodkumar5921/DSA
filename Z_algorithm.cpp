#include<bits/stdc++.h>
using namespace std;
vector<int>calzarray(string str){
    int n=str.size();
    vector<int>z(n,0);
    for(int i=1,l=0,r=0;i<n;i++){
        if(i<=r){
            z[i]=min(z[i-l],r-i+1);
        }
        while(i+z[i]<n and str[i+z[i]]==str[z[i]]){
            z[i]++;
        }
        if(i+z[i]-1>r){
            l=i;
            r=i+z[i]-1;
        }
    }
    return z;
}
int zAlgorithm(string s, string p, int n, int m){
    string str=p+'#'+s;
    // int nlwn=str.size();
    vector<int>zarray=calzarray(str);
    int ans=0;
    for(int i=0;i<str.size();i++){
        if(zarray[i]==m){
            ans++;
        }
    }
    return ans;
}
