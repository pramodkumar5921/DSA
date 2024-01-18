#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N=2e5+1;
int M=1e6+1;
int rootN;
struct Q{
    int l,r,idx;
};
bool cmp(Q &q1, Q &q2){
    if((q1.l/rootN) != (q2.l/rootN)){
        return (q1.l/rootN)<(q2.l/rootN);
    }
    return q1.r<q2.r;
}
int anst=0;
vector<int> freq(M, 0); // Change unordered_map to vector
void add(int x){
    if(freq[x]==0){
        anst++;
        freq[x]++;
    }
    else{
        freq[x]++;
    }
}
void remove(int x){
    if(freq[x]==1){
        anst--;
        freq[x]--;
       
    }
    else{
        freq[x]--;
    }
}
signed main(){
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    Q q[N];
    rootN=sqrtl(n);
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int l,r;
        cin>>l>>r;
        q[i].l=l;
        q[i].r=r;
        q[i].idx=i; 
    }
    sort(q,q+t,cmp);
    vector<int>ans(t,0);
    int L=q[0].l;
    int R=L-1;
    for(int i=0;i<t;i++){
        int l=q[i].l;int r=q[i].r;
        l--;r--;
        while(R<r){
             R++;
            add(arr[R]);
        }
        while(R>r){
            remove(arr[R]);
            R--;
        }
        while(L<l){
            remove(arr[L]);
            L++;
        }
        while(L>l){
            L--;
            add(arr[L]);
        }
        ans[q[i].idx]=anst;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
