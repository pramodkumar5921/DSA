#include<bits/stdc++.h>
bool checkOverlappingIntervals(long* start, long* end, int n)
{
    if(n==0){
        return false;
    }
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        vector<int>v;
        v.push_back(*(i+start));
        v.push_back(*(i+end));
        ans.push_back(v);
    }
    int x1=ans[0][0];
    int x2=ans[0][1];
    for(int i=1;i<n;i++){
        int y1=ans[i][0];
        int y2=ans[i][1];
        if(y2>x1 and y2<x2){
            return true;
        }
        if(y1>x1 and y1<x2){
            return true;
        }
        if(x1>y1 and x1<y2){
            return true;
        }
        if(x2>y1 and x2<y2){
            return true;
        }
        else{
            x1=y1;
            x2=y2;
            // continue;
        }
    }
    return false;
}
