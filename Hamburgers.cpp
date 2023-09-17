#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int MOD = 1000000007;
const int N = 63;
const int blocks = 48;
bool check(long long x,long long cost,vector<int>&prices,vector<int>&count,vector<int>&quantity){
    long long bread=max(0LL,count[0]*x-quantity[0]);
    long long sausage=max(0LL,count[1]*x-quantity[1]);
    long long cheese=max(0LL,count[2]*x-quantity[2]);
    long long total=(quantity[0]*bread + quantity[1]*sausage + quantity[2]*cheese);
    return total<=cost;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    cin>>str;
    vector<int>count(3);
    for(int i=0;i<str.size();i++){
        if(str[i]=='B'){
            count[0]++;
        }
        else if(str[i]=='S'){
            count[1]++;
        }
        else{
            count[2]++;
        }
    }
    vector<int>quantity(3);
    for(int i=0;i<3;i++){
        cin>>quantity[i];
    }
    vector<int>prices(3);
    for(int i=0;i<3;i++){
        cin>>prices[i];
    }
    long long r;
    cin>>r;
    long long left=0;
    long long right=r+2002;
    long long ans=0;
    while(left<=right){
    long long x=left+(right-left)/2;
    long long bread=max(0LL,count[0]*x-quantity[0]);
    long long sausage=max(0LL,count[1]*x-quantity[1]);
    long long cheese=max(0LL,count[2]*x-quantity[2]);
    long long total=(prices[0]*bread + prices[1]*sausage + prices[2]*cheese);
    // return total<=cost;
        if(total<=r){
            left=x+1;
        }
        else{
            right=x-1;
        }
    }
    cout<<right<<endl;
    return 0;
}
