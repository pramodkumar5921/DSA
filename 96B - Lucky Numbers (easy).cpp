#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int MOD = 1000000007;
const int N = 63;
const int blocks = 48; 
 vector<long long>lucky; 
void solve(long long ans,int four,int seven){
    // base case
    if(ans>1e10){
        return;
    }
    if(four==seven){
        lucky.push_back(ans);
    }
    solve(ans*10+4,four+1,seven);
    solve(ans*10+7,four,seven+1);
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    solve(0,0,0);
    sort(lucky.begin(),lucky.end());
    int idx=lower_bound(lucky.begin(),lucky.end(),n)-lucky.begin();
    cout<<lucky[idx]<<endl;
    return 0;
}
