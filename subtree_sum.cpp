#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = (int)(2e5+5);
vector<int> tree[N];
int val[N];
int in[N], out[N], rin[N];
int T = 0;

void dfs(int s, int p){
    in[s] = T++;
    rin[in[s]] = val[s];
    for(int v: tree[s]){
        if(v != p) dfs(v, s);
    }
    out[s] = T;
}

int st[4*N];

void build(int beg, int end, int pos){
    if(beg == end){
        st[pos] = rin[beg];
        return;
    }
    int mid = (beg + end) / 2;
    build(beg, mid, 2*pos+1);
    build(mid+1, end, 2*pos+2);
    st[pos] = st[2*pos+1] + st[2*pos+2];
}

int query(int beg, int end, int ql, int qr, int pos){
    if(ql <= beg and qr >= end){
        return st[pos];
    } 
    else if(qr < beg or ql > end) return 0;
    
    int mid = (beg + end)/2;
    return query(beg, mid, ql, qr, 2*pos+1) + query(mid+1, end, ql, qr, 2*pos+2);
}

void update(int beg, int end, int idx, int val, int pos){
    if(beg == end){
        st[pos] = val;
        return;
    }
    int mid = (beg + end)/2;
    if(idx <= mid){
        update(beg, mid, idx, val, 2*pos+1);
    } 
    else{
        update(mid+1, end, idx, val, 2*pos+2);
    }
    st[pos] = st[2*pos+1] + st[2*pos+2];
}

signed main(){
    int n, q;
    cin >> n >> q;
    
    for(int i=1; i<=n; i++) 
        cin >> val[i];
    
    for(int i=0; i<n-1; i++){
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1, 0);
    // for(int i=0;i<=n;i++){
    //     cout<<in[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<=n;i++){
    //     cout<<out[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<=n;i++){
    //     cout<<rin[i]<<" ";
    // }
    build(0, n-1, 0);
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int s, v;
            cin >> s >> v;
            update(0, n-1, in[s], v, 0);
        }  
        else{
            int s;
            cin >> s;
            cout << query(0, n-1, in[s], out[s]-1, 0) << "\n";
        }
    }
    
    return 0;
}
