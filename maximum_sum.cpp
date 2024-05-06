#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+5;
struct Node{
    int sum;
    int maximum;
};
vector<int>arr(N,0);
vector<Node>st(4*N+5);
Node calc(Node left,Node right){
    Node ans;
    ans.sum=max(left.sum,right.sum);
    ans.sum=max(ans.sum,left.maximum+right.maximum);
    ans.maximum=max(left.maximum,right.maximum);
    return ans;
}
void build(int beg,int end,int pos){
    if(beg==end){
        st[pos].sum=arr[beg];
        st[pos].maximum=arr[beg];
        return;
    }
    int mid=(beg+end)/2;
    build(beg,mid,2*pos+1);
    build(mid+1,end,2*pos+2);

    st[pos]=calc(st[pos*2+1],st[pos*2+2]);
}
void update(int beg,int end,int idx,int val,int pos){
    if(beg==end){
        arr[beg]=val;
        st[pos].maximum=val;
        st[pos].sum=val;
        return;
    }
    int mid=(beg+end)/2;
    if(idx<=mid){
        update(beg,mid,idx,val,2*pos+1);
    }
    else{
        update(mid+1,end,idx,val,2*pos+2);
    }
    st[pos]=calc(st[pos*2+1],st[pos*2+2]); // Move this line here
}
Node query(int beg,int end,int ql,int qr,int pos){
    if(ql<=beg and qr>=end){
        return st[pos];
    }
    else if(ql>end or qr<beg){
       Node temp;
       temp.sum=0;
       temp.maximum=0;
       return temp;
    }
    int mid=(beg+end)/2;
    Node temp1=query(beg,mid,ql,qr,2*pos+1);
    Node temp2=query(mid+1,end,ql,qr,2*pos+2);

    return calc(temp1,temp2);
}
signed main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    build(0,n-1,0);
    while(t--){
        char type;
        int l,r;
        cin>>type;
        cin>>l>>r;
        if(type=='Q'){
            Node result=query(0,n-1,l-1,r-1,0);
            cout<<result.sum<<endl;
        }
        else{
            update(0,n-1,l-1,r,0);
        }
    }
    return 0;
}
