#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+5;
vector<int>arr(4*N,0);
vector<int>st(4*N,0);
vector<int>power(4*N,1);
void build(int beg,int end,int pos){
    if(beg==end){
        st[pos]=arr[beg];
        return;
    }
    int mid=(beg+end)/2;
    build(beg,mid,2*pos+1);
    build(mid+1,end,2*pos+2);

    st[pos]=(power[end-mid]%3*st[2*pos+1]%3+st[2*pos+2]%3)%3;
}

void update(int beg,int end,int idx,int val,int pos){
    if(beg==end){
        st[pos]=1;
        arr[pos]=1;
        return;
    }
    int mid=(beg+end)/2;
    if(idx<=mid){
        update(beg,mid,idx,val,2*pos+1);
    }
    else{
        update(mid+1,end,idx,val,2*pos+2);
    }
    st[pos]=(power[end-mid]%3*st[2*pos+1]%3+st[2*pos+2]%3)%3;
}
int query(int beg,int end,int ql,int qr,int pos){
    if(ql<=beg and qr>=end){
        return (st[pos]*power[qr-end])%3;
    }
    else if(ql>end || qr<beg){
        return 0;
    }
    int mid=(beg+end)/2;
    return (query(beg,mid,ql,qr,2*pos+1)+query(mid+1,end,ql,qr,2*pos+2))%3;
}
signed main(){
    power[0]=1;
for(int i=1;i<N;i++){
    power[i]=(power[i-1]%3 * 2)%3;
}
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++){
        arr[i]=str[i]-'0';
    }
    build(0,n-1,0);
     int t;
    cin>>t;
    while(t--){
        int type;
        cin>>type;
        if(type==0){
            int x,y;
            cin>>x>>y;
            cout<<query(0,n-1,x,y,0)%3<<endl;
        }
        else if(type==1){
            int x;
            cin>>x;
             if(str[x]=='0'){
                   update(0,n-1,x,1,0);
             }
        }
    }
    return 0;
}
