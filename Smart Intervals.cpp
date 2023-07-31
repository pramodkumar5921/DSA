#include<bits/stdc++.h>
vector<int> smartInterval(vector<vector<int>> &intervals, int n)
{
	map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[intervals[i][0]]=i;
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        auto it=mp.lower_bound(intervals[i][1]);
        if(it!=mp.end()){
            ans.push_back(it->second);
        }
        else{
            ans.push_back(-1);
        }
    }
    return ans;
}
