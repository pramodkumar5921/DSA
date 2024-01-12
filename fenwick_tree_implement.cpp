#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>bit(N,0);
int query(int r,int n){
    int res=0;
    for(int i=r+1;i>0;i-=(i&-i)){
        res+=bit[i];
    }
    return res;
}
void update(int k,int delta,int n){
    k+=1;
    for(;k<=n;k+=(k&-k)){
        bit[k]+=delta;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        update(i,arr[i],n);
    }
    
    int t;
    cin>>t;
    
    while(t--){
        int type;
        cin>>type;
        
        if(type==0){
        int idx,val;
        cin>>idx>>val;
        int delta=val-arr[idx];
        arr[idx]=val;
        update(idx,delta,n);
       }
        else{
            int l,r;
            cin>>l>>r;
            
            int ans=query(r,n);
            
            if(l>0){
                ans-=query(l-1,n);
            }
             cout<<ans<<endl;
        }
    }
    return 0;
}
