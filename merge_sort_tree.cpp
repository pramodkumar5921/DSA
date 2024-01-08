#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int N=(int)(3e4+5);
vector<int>arr(N,0);
vector<int>st[4*N];
void build(int beg,int end,int pos){
    if(beg==end){
        st[pos].push_back(arr[beg]);
        return;
    }
    int mid=(beg+end)/2;
    build(beg,mid,2*pos+1);
    build(mid+1,end,2*pos+2);
    
    merge(st[2*pos+1].begin(),st[2*pos+1].end(),st[2*pos+2].begin(),st[2*pos+2].end()
         ,back_inserter(st[pos]));
}
int query(int beg,int end,int ql,int qr,int k,int pos){
    if(ql<=beg && qr>=end){
        auto it=upper_bound(st[pos].begin(),st[pos].end(),k);
        int numlesser=it-st[pos].begin();
        return (end-beg+1-numlesser);
    }
    else if(ql>end or qr<beg){
        return 0;
    }
    int mid=(beg+end)/2;
    return query(beg,mid,ql,qr,k,2*pos+1)+query(mid+1,end,ql,qr,k,2*pos+2);
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    build(0,n-1,0);
    int t;
    cin>>t;
     int ans=0;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        a^=ans;
        b^=ans;
        c^=ans;
        if (a < 1){   
         a = 1;
    }
        if (b > n) b = n;
        if (a > b) {
            ans = 0;
            cout<<ans<<endl;
            continue;
        }
        a--;
        b--;
        ans=query(0,n-1,a,b,c,0);
        cout<<ans<<endl;
    }
    return 0;
}
