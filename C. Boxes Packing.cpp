#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    map<long long,long long>mp;
    for(int i=0;i<n;i++){
        if(mp.size()==0){
            mp[arr[i]]++;
        }
        else{
            auto it=mp.upper_bound(arr[i]);
            if(it==mp.end()){
                mp[arr[i]]++;
            }
            else{
                it->second--;
                if(it->second==0){
                    mp.erase(it->first);
                }
                mp[arr[i]]++;
            }
        }
    }
    long long cnt=0;
    for(auto it:mp){
        cnt+=it.second;
    }
    cout<<cnt<<endl;
    return 0;
}
