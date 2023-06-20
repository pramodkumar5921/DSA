#include<bits/stdc++.h>
bool solve(int mid,vector<int>stalls,int k){
int cnt=1;
int n=stalls.size();
int i=0;
int start=stalls[0];
while(n>i){
int idx=lower_bound(stalls.begin(),stalls.end(),start+mid)-stalls.begin();
if (idx < n) {
  start = stalls[idx];
}
cnt++;
i=idx;
}
return cnt-1>=k;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s=0;
    int l=*max_element(stalls.begin(),stalls.end());
    int ans=0;
    while(s<=l){
        int mid=s+(l-s)/2;
        if(solve(mid,stalls,k)){
            ans=mid;
            s=mid+1;
        }
        else{
            l=mid-1;
        }
    }
    return ans;
}
