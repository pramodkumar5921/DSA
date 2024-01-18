#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
struct query{
    int L,R,idx;
};
const int N=3e4+1;
const int M=1e6+5;
vector<int>arr(N,0);
vector<int>freq(M,0);
int rootN;
int sum=0;
void add(int mr){
    freq[mr]++;
    if(freq[mr]==1){
        sum++;
    }
}
void remove(int ml){
    freq[ml]--;
    if(freq[ml]==0){
        sum--;
    }
}
bool cmp(query &a , query &b){
    if(a.L/rootN != b.L/rootN){
        return a.L/rootN < b.L/rootN;
    }
    return a.R<b.R;
}
signed main(){
    int n;
    cin>>n;
    rootN=sqrtl(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    vector<query>queries(q);
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        l--;r--;
        queries[i].L=l;
        queries[i].R=r;
        queries[i].idx=i;
    }
    sort(queries.begin(),queries.end(),cmp);
    vector<int>ans(q,0);
    int mr=queries[0].L-1;
    int ml=queries[0].L;
    for(int i=0;i<q;i++){
        int l=queries[i].L;
        int r=queries[i].R;
        while(mr<r){
            mr++;
            add(arr[mr]);
        }
        while(mr>r){
            remove(arr[mr]);
            mr--;
        }
        while(ml<l){
            remove(arr[ml]);
            ml++;
        }
        while(l<ml){
            ml--;
            add(arr[ml]);
        }
        ans[queries[i].idx]=sum;
    }
    for(int i=0;i<q;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
