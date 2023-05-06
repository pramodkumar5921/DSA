#include <bits/stdc++.h> 
const int mod=1000000007;
int minProduct(vector<int> &arr, int n, int k) {
    // Write your code here.
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    long long ans=1;
    while(pq.size()>0 and k>0){
        ans=((long long)ans*(pq.top()))%(mod);
        pq.pop();
        k--;
    }
    return ans%mod;
}
