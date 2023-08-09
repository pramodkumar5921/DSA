#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&arr,vector<vector<int>>&result,vector<int>&temp,int k,int ans,int idx){
    int n=arr.size();
    if(idx==n and ans==k){
        result.push_back(temp);
        return;
    }
    if(idx==n){
        return;
    }
    int curr=arr[idx];
    temp.push_back(curr);
    solve(arr,result,temp,k,ans+curr,idx+1);
    temp.pop_back();
    solve(arr,result,temp,k,ans,idx+1);
    return;
}
  void solve1(){
   int n;
   cin>>n;
      int k;
   cin>>k;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   } 
   vector<vector<int>>result;
   vector<int>temp;
   int ans=0;
   solve(arr,result,temp,k,0,0);
   cout<<result.size()<<endl;
   return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve1();
    }
    return 0;
}
