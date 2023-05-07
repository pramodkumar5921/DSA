#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long >line(n);
    for(int i=0;i<n;i++){
        cin>>line[i];
    }
    sort(line.begin(),line.end());
    long long  satisfy=0,wait=0;
    for(int i=0;i<line.size();i++){
        if(line[i]>=wait){
            satisfy++;
            wait+=line[i];
        }
    }
    cout<<satisfy<<" ";
    return 0;
}
