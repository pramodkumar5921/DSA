#include<bits/stdc++.h>
using namespace std;
const int M=1e3+5;
vector<int>sum(M,0);
vector<int>st(4*M,0);
void build(int beg,int end,int pos){
    if(beg==end){
        st[pos]=sum[beg];
        return;
    }
    int mid=(beg+end)/2;
    build(beg,mid,2*pos+1);
    build(mid+1,end,2*pos+2);
    st[pos]=st[2*pos+1]+st[2*pos+2];
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
    st[pos]=st[2*pos+1]+st[2*pos+2];
}
int query(int beg,int end,int ql,int qr,int pos){
    if(ql<=beg and qr>=end){
        return st[pos];
    }
    else if(ql>end or qr<beg){
        return 0;
    }
    int mid=(beg+end)/2;
    return query(beg,mid,ql,qr,2*pos+1)+query(mid+1,end,ql,qr,2*pos+2);
}
vector<int> fenwikTree(vector<int> arr, int N){
    vector<int>res;
    build(0,1003,0);
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        int ans=query(0,1003,arr[i]+2,1003,0);
        res.push_back(ans);
        mp[arr[i]]++;
        update(0, 1003, arr[i]+1, arr[i]*mp[arr[i]], 0);
    }
    return res;
}
