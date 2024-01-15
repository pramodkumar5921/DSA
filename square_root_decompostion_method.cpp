#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int blk_size;
bool check(int i,int j){
    return (i/blk_size)==(j/blk_size);
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int  jumps[n],next[n],last[n];
    int begin_blocks[n];
    blk_size=sqrt(n);
    for(int i=n-1;i>=0;i--){
        if((i+arr[i])>=n){
            jumps[i]=1;
            next[i]=-1;
            last[i]=i;
        }
        else if(check(i,arr[i]+i)){
            jumps[i]=jumps[i+arr[i]]+1;
            next[i]=next[i+arr[i]];
            last[i]=last[i+arr[i]];
        }
        else{
            jumps[i]=1;
            next[i]=i+arr[i];
            last[i]=i;
        }
    }
    begin_blocks[0]=0;
    for(int i=1;i<n;i++){
        if(check(i,i-1)){
            begin_blocks[i]=begin_blocks[i-1];
        }
        else{
            begin_blocks[i]=i;
        }
    }
    while(m--){
        int type;
        cin>>type;

        if(type==0){
            int idx,val;
            cin>>idx>>val;
            idx-=1;
            int beg=begin_blocks[idx];
            arr[idx]=val;
            while(idx>=beg){
                if(idx+arr[idx]>=n){
                    jumps[idx]=1;
                    next[idx]=-1;
                    last[idx]=idx;
                }
                else if(check(idx,idx+arr[idx])){
                    jumps[idx]=jumps[idx+arr[idx]]+1;
                    next[idx]=next[idx+arr[idx]];
                    last[idx]=last[idx+arr[idx]];
                }
                else{
                    jumps[idx]=1;
                    next[idx]=idx+arr[idx];
                    last[idx]=idx;
                }
                idx--;
            }
        }
            else{
                int idx;
                cin>>idx;
                idx-=1;
                int numjumps=0;
                int lastvisited=idx;
                while(idx!=-1){
                    numjumps+=jumps[idx];
                    lastvisited=last[idx];
                    idx=next[idx];
                }
                cout<<lastvisited+1<<" "<<numjumps<<endl;
            }
    }
    return 0;
}
