#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
    Node*next[26];
    int cnt;
    
    Node(){
        cnt=0;
        for(int i=0;i<26;i++){
            next[i]=nullptr;
        }
    }
}Node;
void insert(Node*curr,string &temp,int idx){
    if(idx==temp.size()){
        curr->cnt+=1;
        return;
    }
    curr->cnt+=1;
    int nextidx=(int)(temp[idx]-'a');
    if(curr->next[nextidx]==nullptr){
        curr->next[nextidx]=new Node();
    }
    insert(curr->next[nextidx],temp,idx+1);
}
int query(Node*curr,string &txt,int idx){
    if(curr==nullptr){
        return 0;
    }
    if(idx==txt.size()){
        return curr->cnt;
    }
    int nextidx=(int)(txt[idx]-'a');
    return query(curr->next[nextidx],txt,idx+1);
}
int main(){
    int n,q;
    cin>>n>>q;
    vector<string>arr(n);
    Node*root=new Node();
    for(int i=0;i<n;i++){
        cin>>arr[i];
        insert(root,arr[i],0);
    }
    while(q--){
        string txt;
        cin>>txt;
        cout<<query(root,txt,0)<<'\n';
    }
    return 0;
}
