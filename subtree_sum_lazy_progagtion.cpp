#include<bits/stdc++.h>
using  namespace std;
#define int long long
vector<vector<int>>mp;
vector<int>val;
vector<int>in,out,A;
int t;
vector<int>st;
void dfs(int s,int p){
    in[s]=t++;
    A[in[s]]=val[s];
    for(int v:mp[s]){
        if(v!=p){
            dfs(v,s);
        }
    }
    out[s]=t;
}
void build(int beg,int end,int pos){
    if(beg==end){
        st[pos]=A[beg];
        return;
    }
    int mid=(beg+end)/2;
    build(beg,mid,2*pos+1);
    build(mid+1,end,2*pos+2);
    st[pos]=st[2*pos+1]+st[2*pos+2];
}
int query(int beg,int end,int ql,int qr,int pos){
    if(ql<=beg and qr>=end){
        return st[pos];
    }
    else if(qr<beg or ql>end){
        return 0;
    }
    int mid=(beg+end)/2;
    return query(beg,mid,ql,qr,2*pos+1)+query(mid+1,end,ql,qr,2*pos+2);
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
// function to reset the globally declared data structure
void resetAll(int N){
    val.resize(N+1);
    in.resize(N+1);
    out.resize(N+1);
    A.resize(N+1);
    st.resize(4*N+5);
    t=0;
    mp.resize(N+1);
    for(int i=0;i<=N;i++){
        mp[i].clear();
    }
}
vector<long long> treeSum(int N, int Q, vector<int>& V, vector<vector<int>>& edges,
 vector<vector<int>>& queries){
     resetAll(N);
     for(int i=1;i<=N;i++){
         val[i]=V[i-1];
     }
     // convert connections in to three respresentation
     for(vector<int>s:edges){
         mp[s[0]].push_back(s[1]);
         mp[s[1]].push_back(s[0]);
     }
     dfs(1,0);
     build(0, N-1,0);
     vector<long long>ans;
    for(vector<int>qu:queries){
        if(qu[0]==1){
           int node=qu[1],weight=qu[2];
           update(0,N-1,in[node],weight,0);
        }
        else{
            int node=qu[1];
            int sum=query(0,N-1,in[node],out[node]-1,0);
            ans.push_back(sum);
        }
    }
    return ans;
}
