#include<bits/stdc++.h>
using namespace std;
#define int long long
int N=2e5+5;
vector<int>arr(N+1,0);
signed main(){
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        arr[i]=(arr[i-1]^arr[i]);
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<< (arr[r]^arr[l-1]) <<endl;
    }
    return 0;
}
