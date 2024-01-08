#include<bits/stdc++.h>
using namespace std;
const int N=(int)(1e5+5);
vector<int>arr(N,0);
vector<int>arr2(N,0);
pair<int,pair<int,int>>st[4*N];
pair<int,pair<int,int>>combine(pair<int,pair<int,int>>&l,pair<int,pair<int,int>>&r){
   int maxil=l.second.first;
   int maxir=r.second.first;
   int minil=l.second.second;
   int minir=r.second.second;
   int idxl=l.first;
   int idxr=r.first;

   if(maxil>maxir){
       return {idxl,{maxil,minil}};
   }
   else if(maxil<maxir){
       return {idxr,{maxir,minir}};
   }
   else if(maxil==maxir and (minil<minir)){
       return {idxl,{maxil,minil}};
   } 
   else if (maxil == maxir and (minil > minir)) {
       return {idxr,{maxir,minir}};
   }
   else if(maxil==maxir and (minil==minir)){
       if(idxl<idxr){
              return {idxl,{maxil,minil}};
       }
   }
   return {idxr,{maxir,minir}};
}
void build(int beg,int end,int pos){
    if(beg==end){
        st[pos]={beg,{arr[beg],arr2[beg]}};
        return;
    }
    int mid=(beg+end)/2;
    build(beg,mid,2*pos+1);
    build(mid+1,end,2*pos+2);

    st[pos]=combine(st[2*pos+1],st[2*pos+2]);
}
pair<int,pair<int,int>>query(int beg,int end,int ql,int qr,int pos){
    if(ql<=beg and qr>=end){
        return st[pos];
    }
    else if(ql>end or qr<beg){
        return {-1,{-1,-1}};
    }
    int mid=(beg+end)/2;
    pair<int,pair<int,int>>alpha=query(beg,mid,ql,qr,2*pos+1);
    pair<int,pair<int,int>>gamma=query(mid+1,end,ql,qr,2*pos+2);

    pair<int,pair<int,int>>res=combine(alpha,gamma);

    return res;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    build(0,n-1,0);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        pair<int,pair<int,int>>res=query(0,n-1,x-1,y-1,0);
        cout<<res.first+1<<endl;
    }
    return 0;
}
