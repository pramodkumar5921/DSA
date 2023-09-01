// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
 vector<vector<long long>>multiplication(vector<vector<long long>>&a, vector<vector<long long>>&b){
    int n = a.size();
    vector<vector<long long>>res(n,vector<long long>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                long long cnt=((a[i][k]%mod)*(b[k][j]%mod))%mod;
                res[i][j] = (res[i][j]%mod + cnt%mod)%mod;
            }
        }
    }
    return res;
}
void solve(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,power;
    cin>>n>>power;
     vector<vector<long long>>temp(n,vector<long long>(n,0));
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>temp[i][j];
        }
     }
     vector<vector<long long>>res(n,vector<long long>(n,0));
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                res[i][j]=1;
            }
        }
    }
    while(power>0){
        if(power%2!=0){
           res=multiplication(res,temp);
            power--;
        }
        temp = multiplication(temp,temp);
        power = power/2;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<'\n';
    }
    return ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
} 
