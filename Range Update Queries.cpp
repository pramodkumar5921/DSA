#include<bits/stdc++.h>
using namespace std;
#define int long long
int N=2e5+5;
vector<int>arr(N,0);
vector<int>lazy(4*N,0);
void build(int pos,int start,int end){
    if(start==end){
        lazy[pos]=arr[start];
        return;
    }
    int mid= (int)(start+end)/2;
    build(2*pos+1,start,mid);
    build(2*pos+2,mid+1,end);
    lazy[pos]=0;
}
void propogate(int pos,int start,int end){
    if(start==end){
        return;
    }
    int left=2*pos+1;
    int right=2*pos+2;
    lazy[left]+=lazy[pos];
    lazy[right]+=lazy[pos];
    lazy[pos]=0;
}
void update(int pos,int start,int end,int l,int r,int val){
    // propogate(pos,start,end);
     if(end<l || start>r){
        return;
    }
    if(start==end){
        lazy[pos]+=val;
        return;
    }
    else if(l<=start and end<=r){
        lazy[pos]+=val;
    }
    else{
        int mid= (int)(start+end)/2;
        update(2*pos+1,start,mid,l,r,val);
        update(2*pos+2,mid+1,end,l,r,val);
    }
}
int query(int pos,int start,int end,int idx){
    propogate(pos,start,end);
    if(start==end){
        return lazy[pos];
    }
    int mid= (int)(start+end)/2;
    if(start<=idx and idx<=mid){
        return query(2*pos+1,start,mid,idx);
    }
    else{
        return query(2*pos+2,mid+1,end,idx);
    }
}
signed main(){
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    build(0,0,n-1);
    while(q--){
        int type;
        cin>>type;
        if(type==2){
            int idx;
            cin>>idx;
            cout<<query(0,0,n-1,idx-1)<<endl;
        }
        else{
            int l,r,val;
            cin>>l>>r>>val;
            l=l-1;
            r=r-1;
            update(0,0,n-1,l,r,val);
        }
    }
    return 0;
}
