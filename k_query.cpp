#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'
const int N=3e4+1;
vector<int>arr(N,0);
vector<int>st[4*N];
void build(int beg,int end,int pos){
    if(beg==end){
        st[pos].push_back(arr[beg]);
        return;
    }
    int mid=(beg+end)/2;
    build(beg,mid,2*pos+1);
    build(mid+1,end,2*pos+2);
    
    merge(st[2*pos+1].begin(),st[2*pos+1].end(),st[2*pos+2].begin(),st[2*pos+2].end(),
         back_inserter(st[pos]));
}
int query(int beg,int end,int pos,int ql,int qr,int k){
    if(ql<=beg and qr>=end){
        auto it=upper_bound(st[pos].begin(),st[pos].end(),k);
        int numlesser=it-st[pos].begin();
        return end-beg+1-numlesser;
    }
    else if(ql>end || qr<beg){
        return 0;
    }
    int mid=(beg+end)/2;
    return query(beg,mid,2*pos+1,ql,qr,k)+query(mid+1,end,2*pos+2,ql,qr,k);
}
int main() {
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    build(0,n-1,0);
    int t;
    cin>>t;
    while(t--){
        int l,r,k;
        cin>>l>>r>>k;
        l--;r--;
        cout<<query(0,n-1,0,l,r,k)<<endl;
    }
    return 0;
}
