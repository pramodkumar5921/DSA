#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// const int mod = 1e9+7;
vector<vector<double>>product(vector<vector<double>>&res,vector<vector<double>>&temp){
    vector<vector<double>>ans={{0.0,0.0},{0.0,0.0}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                double cnt = (res[i][k]*temp[k][j]);
                ans[i][j] = (ans[i][j]+cnt);
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
    double p;
    cin>>p;
    double cnt = 1-p;
    vector<vector<double>>temp={{cnt,p},{p,cnt}};
    vector<vector<double>>res={{1,0},{0,1}};
    while(n>0){
        if(n&1){
            res = product(res,temp);
            n--;
        }
        temp = product(temp,temp);
        n = n/2;
    }
    cout<<setprecision(10)<<fixed<<res[0][0]<<'\n';
    return 0;
}
