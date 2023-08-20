#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define lli long long int
const int MOD = 1000000007;
const int N = 63;
const int blocks = 48; 
int n;
vector<int>primediv;
void solve(lli n){
    for(lli i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            primediv.push_back(i);
        }
    }
    if(n>1){
        primediv.push_back(n);
    }
    return ;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    n;
    cin>>n;
    vector<int>arr(n);
    vector<int>brr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cin>>brr[i];
    }
    solve(arr[0]);
    solve(brr[0]);
    for(auto d:primediv){
        int cnt=0;
        for(int i=1;i<n;i++){
            if(arr[i]%d==0 || brr[i]%d==0){
                cnt++;
            }
            else{
                break;
            }
        }
        if(cnt==n-1){
            cout<<d<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
