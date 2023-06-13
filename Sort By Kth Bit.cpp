#include<bits/stdc++.h>
int solve(int cnt,int ele){
    int ans=0;
    while(cnt>0 ){
        ans=ele%2;
        ele=ele/2;
        cnt--;
    }
    return ans;
}
vector<int> sortArrayByKBit(int n, int k, vector<int> &arr) {
    unordered_map<int,bool>mp;
    for(int i=0;i<n;i++){
        int rem=solve(k,arr[i]);
        if(rem==0){
            mp[arr[i]]=0;
        }
        else if(rem==1){
            mp[arr[i]]=1;
        }
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]==false){
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(mp[arr[i]]==true){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
