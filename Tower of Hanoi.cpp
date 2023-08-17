#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>>&res,int n,int source,int helper,int des){
    // base case
    if(n==0){
        return ;
    }
    // recursive case
    solve(res,n-1,source,des,helper);
    res.push_back({source, helper});
    solve(res,n-1,des,helper,source);
    return;
}
vector<vector<int>> towerOfHanoi(int n)
{
   vector<vector<int>>res;
   solve(res,n,1,2,3);
   return res;
}
