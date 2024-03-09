#include<bits/stdc++.h>
using namespace std;
int dp[101][101][101];
long long solve(string &str1,string &str2,int k,int i,int j){
    // base case
    if(i==str1.size()){
        if(k==0){
            return 0;
        }
        return INT_MIN;
    }
    if(j==str2.size()){
         if(k==0){
            return 0;
        }
        return INT_MIN;
    }
    if(dp[i][j][k]!=-1){
        return dp[i][j][k];
    }
    // recursive case
    long long ans=0;
    if(str1[i]==str2[j]){
        long long include=int(str1[i])+solve(str1,str2,k-1,i+1,j+1);
         long long exclude=0+solve(str1,str2,k,i+1,j+1);

         return max(include,exclude);
    }
    else{
        ans=max(solve(str1,str2,k,i+1,j),solve(str1,str2,k,i,j+1));
    }
    return dp[i][j][k]=ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(dp,-1,sizeof(dp));
        string str1,str2;
        cin>>str1>>str2;
        int k;
        cin>>k;
        long long ans=solve(str1,str2,k,0,0);
        if(k>str1.size() || k>str2.size()){
            cout<<0<<endl;
        } else {
            if(ans<0){
                cout<<0<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}
