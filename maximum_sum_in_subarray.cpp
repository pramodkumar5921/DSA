#include<bits/stdc++.h>
using namespace std;
const int N=1e5+1;

struct Node{
    int maxprefixsum;
    int maxsuffixsum;
    int totalsum;
    int maxsubarraysum;
    Node(){
        maxprefixsum=-1e5;
        maxsuffixsum=-1e5;
        totalsum=-1e5;
        maxsubarraysum=-1e5;
    }
};
vector<int>arr(N,0);
Node st[4*N+5];
Node merge(Node l,Node r){
    Node parentNode;
    parentNode.maxprefixsum=max(l.maxprefixsum,l.totalsum+r.maxprefixsum);
    parentNode.maxsuffixsum=max(r.maxsuffixsum,r.totalsum+l.maxsuffixsum);
    parentNode.totalsum=l.totalsum+r.totalsum;
    parentNode.maxsubarraysum=max({l.maxsubarraysum,r.maxsubarraysum,l.maxsuffixsum+r.maxprefixsum});
    return parentNode;
}
void build(int beg,int end,int pos){
    if(beg==end){
        st[pos].maxprefixsum=arr[beg];
        st[pos].maxsuffixsum=arr[beg];
        st[pos].totalsum=arr[beg];
        st[pos].maxsubarraysum=arr[beg];
        return;
    }
    int mid=(beg+end)/2;
    build(beg,mid,2*pos+1);
    build(mid+1,end,2*pos+2);
    st[pos]=merge(st[2*pos+1],st[2*pos+2]);
}
Node query(int beg,int end,int ql,int qr,int pos){
        if(ql>end || qr<beg){
        Node temp;
        temp.maxprefixsum=-1e5;
        temp.maxsuffixsum=-1e5;
        temp.totalsum=-1e5;
        temp.maxsubarraysum=-1e5;
        return temp;
    }
    else if(ql<=beg and qr>=end){
        return st[pos];
    }
    int mid=(beg+end)/2;
    Node alpha=query(beg,mid,ql,qr,2*pos+1);
    Node gamma=query(mid+1,end,ql,qr,2*pos+2);

    return merge(alpha,gamma);
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    build(0,n-1,0);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<query(0,n-1,x-1,y-1,0).maxsubarraysum<<endl;
    }
    return 0;
}
