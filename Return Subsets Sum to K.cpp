#include<bits/stdc++.h>
void solve(vector<int>&arr,int idx,int k,vector<vector<int>>&result,vector<int>&temp,int ans){
    // base case
    int n=arr.size();
    // if(ans==k){
    //     // sort(temp.begin(),temp.end());
    //     result.push_back(temp);
    //     return;
    // }
    if(idx==n and ans==k){
        // sort(temp.begin(),temp.end());
         result.push_back(temp);
        return;
    }
    if(idx==n){
        return;
    }
    int num=arr[idx];
    temp.push_back(num);
    solve(arr,idx+1,k,result,temp,ans+num);
    temp.pop_back();
    solve(arr,idx+1,k,result,temp,ans);
    return;
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // sort(arr.begin(),arr.end());
    int ans=0;
    vector<vector<int>>result;
    vector<int>temp;
    solve(arr,0,k,result,temp,ans);
    return result;
}
