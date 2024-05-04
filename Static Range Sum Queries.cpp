#include <bits/stdc++.h>
using namespace std;
// const int N=2e5+5;
#define int long long
const int N=2e5+5;
vector<int>arr(N+1,0);
vector<int>st(4*N+5,0);
void build(int beg,int end,int pos){
    if(beg==end){
        st[pos]=arr[beg];
        return;
    }
    int mid=beg+(end-beg)/2;
    build(beg,mid,2*pos+1); 
    build(mid+1,end,2*pos+2); 
    
    st[pos]=st[pos*2+1]+st[2*pos+2];
}
int query(int beg,int end,int ql,int qr,int pos){
    if(ql<=beg and qr>=end){
        return st[pos];
    }
    else if(ql>end or qr<beg){
        return 0;
    }
    int mid=beg+(end-beg)/2;
    
    return query(beg,mid,ql,qr,2*pos+1)+ query(mid+1,end,ql,qr,2*pos+2);
}
signed main(){
   int n,t;
   cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    build(0,n-1,0);
   while(t--){
       int a,b;
       cin>>a>>b;
       cout<<query(0,n-1,a-1,b-1,0)<<endl;
   }
    return 0;
}
