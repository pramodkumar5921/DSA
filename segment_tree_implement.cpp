#include <bits/stdc++.h>
using namespace std;
const int N=1e5+1;
void build(int beg,int end,int pos,vector<int>&arr,vector<int>&st){
    if(beg==end){
        st[pos]=arr[beg];
        return;
    }
    int mid=(beg+end)/2;
    build(beg,mid,2*pos+1,arr,st); // right  tree Node
    build(mid+1,end,2*pos+2,arr,st); // left tree Node
    
    st[pos]=st[pos*2+1]+st[2*pos+2];
}
void update(int beg,int end,int idx,int val,int pos,vector<int>&arr,vector<int>&st){
    if(beg==end){
        st[pos]=val;
        return;
    }
    int mid=(beg+end)/2;
    if(idx<=mid){
        update(beg,mid,idx,val,2*pos+1,arr,st);
    }
    else{
        update(mid+1,end,idx,val,2*pos+2,arr,st);
    }
    st[pos]=st[pos*2+1]+st[2*pos+2];
}
int query(int beg,int end,int ql,int qr,int pos,vector<int>&arr,vector<int>&st){
    if(ql<=beg and qr>=end){
        return st[pos];
    }
    else if(ql>end or qr<beg){
        return 0;
    }
    int mid=(beg+end)/2;
    
    return query(beg,mid,ql,qr,2*pos+1,arr,st)+ query(mid+1,end,ql,qr,2*pos+2,arr,st);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>st(4*n+1);
    build(0,n-1,0,arr,st);
    cout<<query(0,n-1,2,5,0,arr,st)<<endl;
    update(0,n-1,2,7,0,arr,st);
    cout<<query(0,n-1,2,5,0,arr,st)<<endl;
    return 0;
}
