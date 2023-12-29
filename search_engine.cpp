#include<bits/stdc++.h>
using namespace std; 
typedef struct Node{
     Node*next[26];
     int maxsubtree;
     Node(){
         maxsubtree=0;
         for(int i=0;i<26;i++){
             next[i]=NULL;
         }
     }
}Node;
void insert(Node*curr,pair<string ,int>&temp,int idx){
    if(idx==temp.first.size()){
        curr->maxsubtree=temp.second;
        return;
    }
    curr->maxsubtree=max(curr->maxsubtree,temp.second);

    int nextidx=(int)(temp.first[idx]-'a');

    if(curr->next[nextidx]==NULL){
        curr->next[nextidx]=new Node();
    }
    insert(curr->next[nextidx],temp,idx+1);
}
int query(Node*curr,string &txt,int idx){
    if(curr==NULL){
        return -1;
    }
    if(idx==txt.size()){
        return curr->maxsubtree;
    }
    int nextidx=(int)(txt[idx]-'a');
    return query(curr->next[nextidx],txt,idx+1);
}
vector<int> searchEngine(vector<pair<string, int> > database, vector<string> text){
    Node*root=new Node();
    for(int i=0;i<database.size();i++){
        insert(root,database[i],0);
    }
    vector<int>ans;
    for(int i=0;i<text.size();i++){
        ans.push_back(query(root,text[i],0));
    }
    return ans;
}
