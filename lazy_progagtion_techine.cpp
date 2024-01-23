#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N = (int)(4e5+5);
vector<int> tree[N];
int val[N];
int in[N], out[N], rin[N];
int colors[N];
int T = 0;
void dfs(int s, int p){
    in[s] = T++;
    rin[in[s]] = (1ll<<colors[s]);
    for(int v: tree[s]){
        if(v != p) dfs(v, s);
    }
    out[s] = T;
}
int st[4*N];
int lazy[4*N];
void propagate(int beg,int end,int pos){
    if(lazy[pos]!=-1){
        st[pos]=(1ll<<lazy[pos]);
        if(beg!=end){
            lazy[2*pos+1]=lazy[pos];
            lazy[2*pos+2]=lazy[pos];
        }
        lazy[pos]=-1;
    }
}
void build(int beg, int end, int pos){
    if(beg == end){
        st[pos] = rin[beg];
        return;
    }
    int mid = (beg + end) / 2;
    build(beg, mid, 2*pos+1);
    build(mid+1, end, 2*pos+2);
    st[pos] = st[2*pos+1] | st[2*pos+2];
}
int query(int beg, int end, int ql, int qr, int pos){
    propagate(beg,end,pos);
    if(ql <= beg and qr >= end){
        return st[pos];
    } 
    else if(qr < beg or ql > end) return 0;
    
    int mid = (beg + end)/2;
    return query(beg, mid, ql, qr, 2*pos+1) | query(mid+1, end, ql, qr, 2*pos+2);
}

void update(int beg, int end,int ql,int qr, int pos,int col){
    propagate(beg, end,pos);
    if(ql<=beg and qr>=end){
        lazy[pos]=col;
        propagate(beg,end,pos);
        return;
    }
    else if(qr<beg or ql>end){
        return;
    }
    int mid=(beg+end)/2;
    update(beg,mid,ql,qr,2*pos+1,col);
    update(mid+1,end,ql,qr,2*pos+2,col);
    st[pos]=st[2*pos+1]|st[2*pos+2];
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>colors[i];
        colors[i]-=1;
    }
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1,0);
    build(0,n-1,0);
    fill(lazy,lazy+4*N,-1);
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int s,col;
            cin>>s>>col;
            col-=1;
            update(0,n-1,in[s],out[s]-1,0,col);
        }
        else{
            int s;cin>>s;
            int ans=query(0,n-1,in[s],out[s]-1,0);
            int num=0;
            for(int i=0;i<60;i++){
                if(ans&(1ll<<i)){
                    num++;
                }
            }
            cout<<num<<endl;
        }
    }
    return 0;
}
