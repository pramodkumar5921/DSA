#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
vector<vector<long long>>product(vector<vector<long long>>&res,vector<vector<long long>>&temp){
    vector<vector<long long>>ans={{0,0},{0,0}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                long long cnt = (res[i][k]%mod*temp[k][j]%mod)%mod;
                ans[i][j] = (ans[i][j]%mod + cnt%mod)%mod;
            }
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin>>n;
    vector<vector<long long>>temp={{19,7},{6,20}};
    vector<vector<long long>>res={{1,0},{0,1}};
    while(n>0){
        if(n&1){
            res = product(res,temp);
            n--;
        }
        temp = product(temp,temp);
        n = n/2;
    }
    cout<<res[0][0]<<'\n';
    return 0;
}
