#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k){
    int m=(1<<n)-1;
    vector<vector<int>>res;
    for(int mask=0;mask<=m;mask++){
        int sum=0;
        vector<int>temp;
        for(int bit=0;bit<n;bit++){
            if(mask&(1<<bit)){
                temp.push_back(arr[bit]);
                sum+=arr[bit];
            }
        }
        if(sum==k){
            res.push_back(temp);
        }
    }
    return res;
}
