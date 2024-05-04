#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+1;
vector<int>arr(N+1,0);
vector<int>st(4*N+5,0);
void build(int beg,int end,int pos){
    if(beg==end){
        st[pos]=arr[beg];
        return;
    }
    int mid=(beg+end)/2;
    build(beg,mid,2*pos+1); // right  tree Node
    build(mid+1,end,2*pos+2); // left tree Node
    
    st[pos]=min(st[pos*2+1],st[2*pos+2]);
}
void update(int beg,int end,int idx,int val,int pos){
    if(beg==end){
        st[pos]=val;
        return;
    }
    int mid=(beg+end)/2;
    if(idx<=mid){
        update(beg,mid,idx,val,2*pos+1);
    }
    else{
        update(mid+1,end,idx,val,2*pos+2);
    }
    st[pos]=min(st[pos*2+1],st[2*pos+2]);
}
int query(int beg,int end,int ql,int qr,int pos){
    if(ql<=beg and qr>=end){
        return st[pos];
    }
    else if(ql>end or qr<beg){
        return INT_MAX;
    }
    int mid=(beg+end)/2;
    
    return min(query(beg,mid,ql,qr,2*pos+1), query(mid+1,end,ql,qr,2*pos+2));
}
signed main(){
    int n,t;
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    build(0,n-1,0);
    while(t--){
        int type,idx,val;
        cin>>type>>idx>>val;
        if(type==1){
            update(0,n-1,idx-1,val,0);
        }
        else{
            cout<<query(0,n-1,idx-1,val-1,0)<<endl;
        }
    }
    return 0;
}
