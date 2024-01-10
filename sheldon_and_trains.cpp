#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
pair<int,int>st[4*N];
vector<int>arr(N,0);
void build(int beg,int end,int pos){
    if(beg==end){
        st[pos]={arr[beg],beg};
        return;
    }
    int mid=(beg+end)/2;
    build(beg,mid,2*pos+1);
    build(mid+1,end,2*pos+2);

    st[pos]=max(st[2*pos+1],st[2*pos+2]);
}
pair<int,int> query(int beg,int end , int ql,int qr,int pos){
    if(ql<=beg and qr>=end){
        return st[pos];
    }
    else if(ql>end || qr<beg){
        return make_pair(-1,-1);
    }
    int mid=(beg+end)/2;
    return max(query(beg,mid,ql,qr,2*pos+1),query(mid+1,end,ql,qr,2*pos+2));
}
int main(){
    
    int n;
    cin >> n;
    // vector<int> a(n);
    arr[n - 1] = n - 1;
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        arr[i]--;
    }

    build(0,n-1,0);
    vector<long long> dp(n);
    long long ans = 0;
    dp[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--) {
        int m = query(0,n-1,i+1,arr[i],0).second;
        dp[i] = dp[m] - (arr[i] - m) + n - i - 1;
        ans += dp[i];
    }
    cout<<ans<<endl;
    return 0;
}
