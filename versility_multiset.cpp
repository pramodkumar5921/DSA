#include<bits/stdc++.h>
using namespace std;
// #define int long long
typedef struct Node{
    Node*left;
    Node*right;
    int cnt;
    Node(){
        left=right=NULL;
        cnt=0;
    }
}Node;
Node*remove(Node*curr,int x,int i){
    curr->cnt-=1;
    if(curr->cnt==0){
        return NULL;
    }
    if(i==-1){
        return curr;
    }
    long long i_bit=(x>>i)&1;
    if(i_bit==1){
        curr->right=remove(curr->right,x,i-1);
    }
    else{
        curr->left=remove(curr->left,x,i-1);
    }
    return curr ;
}
void insert(Node*curr,int x,int i){
    curr->cnt+=1;
    if(i==-1){
        return;
    }
    long long i_bit=(x>>i & 1);
    if(i_bit==1){
        if(curr->right==NULL){
            curr->right=new Node();
        }
        insert(curr->right,x,i-1);
    }
    else{
        if(curr->left==NULL){
            curr->left=new Node;
        }
        insert(curr->left,x,i-1);
    }
}
int search(Node*curr,int x,int i){
    if(i==-1){
        return 0;
    }
    long long i_bit=(x>>i)&1;
    if(i_bit==1){
        if(curr->left!=NULL){
            return ((1ll<<i)+search(curr->left,x,i-1));
        }
        else{
            return search(curr->right,x,i-1);
        }
    }
    else{
        if(curr->right!=NULL){
            return ((1ll<<i) + search(curr->right,x,i-1));
        }
        else{
            return search(curr->left,x,i-1);
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    Node*root=new Node();
     insert(root,0,31);
    vector<pair<char,int>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    for(int i=0;i<n;i++){
        int ct=arr[i].first;
        int val=arr[i].second;
        if(ct=='+'){
            insert(root,val,31);
        }
        else if(ct=='-'){
            remove(root,val,31);
        }
        else{
            long long ans=search(root,val,31);
            cout<<ans<<endl;
        }
    }
    return 0;
}
