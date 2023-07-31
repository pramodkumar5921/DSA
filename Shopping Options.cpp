#include<bits/stdc++.h>
int solve(int remain,vector<int>&paintsshirts){
    int left=0;
    int right=paintsshirts.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(paintsshirts[mid]<=remain){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return left;
}
int shoppingOptions(vector<int>& pants, vector<int>& shirts, vector<int>& shoes, vector<int>& skirts, int budget)
{
    int a=pants.size();
    int b=shirts.size();
    int c=shoes.size();
    int d=skirts.size();
    vector<int>paintsshirts;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            paintsshirts.push_back(pants[i]+shirts[j]);
        }
    }
    long long ans=0;
    sort(paintsshirts.begin(),paintsshirts.end());
	for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            int remain=budget-(shoes[i]+skirts[j]);
            int cost=solve(remain,paintsshirts);
            ans+=cost;
        }
    }
    return ans;
}
