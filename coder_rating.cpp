#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int N=(int)(1e6+5);
int bit[N];
typedef struct ratings{
    int A,H,index;
    ratings(){
        A=0;
        H=0;
        index=0;
    }
}ratings;
void update(int idx,int delta){
    idx+=1;
    for(;idx<N;idx+=(idx&-idx)){
        bit[idx]+=delta;
    }
}
int query(int r){
    int res=0;
    r+=1;
    for(;r>0;r-=(r&-r)){
        res+=bit[r];
    }
    return res;
}
bool cmp(ratings a, ratings b){
    if(a.A != b.A){
        return a.A<b.A;
    }
    return a.H<b.H;
}

signed main(){
    int n;
    cin>>n;
    ratings r[n];
    for(int i=0;i<n;i++){
        cin>>r[i].A>>r[i].H;
        r[i].index=i;
    }
    sort(r,r+n,cmp);
    int ans[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        if(i<n-1 && r[i].A==r[i+1].A && r[i].H==r[i+1].H){
            cnt++;
            ans[r[i].index]=query(r[i].H);
        }
        else{
            cnt++;
            ans[r[i].index]=query(r[i].H);
            update(r[i].H,cnt);
            cnt=0;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
