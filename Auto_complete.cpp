#include<bits/stdc++.h>
using namespace std;
// #define alphabet_size(26)
// #define char_to_index
struct TriedNode{
    struct TriedNode*children[26];
    bool iswordend;
};
struct TriedNode*getNode(void){
    struct TriedNode*pNode=new TriedNode;
    pNode->iswordend=false;
    for(int i=0;i<26;i++){
        pNode->children[i]=NULL;
    }
    return pNode;
}
void insert(struct TriedNode*root,const string key){
    struct TriedNode*pcrawl=root;
    for(int level=0;level<key.size();level++){
        int index=key[level]-'a';
        if(!pcrawl->children[index]){
            pcrawl->children[index]=getNode();
           
        }
         pcrawl=pcrawl->children[index];
    }
       pcrawl->iswordend=true;
}
bool islastNode(struct TriedNode*root){
    for(int i=0;i<26;i++){
        if(root->children[i]){
            return 0;
        }
    }
    return 1;
}
void suggestionrec(struct TriedNode*root,string currprefix){
    if(root->iswordend){
        cout<<currprefix<<endl;
    }
    for(int i=0;i<26;i++){
        if(root->children[i]){
            char child='a'+i;
            suggestionrec(root->children[i], currprefix+child);
        }
    }
}
int printautosuggestion(TriedNode*root,const string query){
    struct TriedNode*pcrawl=root;
    for(char c:query){
        int ind=c-'a';
        if(!pcrawl->children[ind]){
            return 0;
        }
        pcrawl=pcrawl->children[ind];
    }
    if(islastNode(pcrawl)){
        cout<<query<<endl;
        return -1;
    }
    suggestionrec(pcrawl, query);
    return 1;
}

int main(){
    struct TriedNode*root=getNode();
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        insert(root,arr[i]);
    }
    int t;
    cin>>t;
    vector<string>suggest(t);
    for(int i=0;i<t;i++){
        cin>>suggest[i];
    }
    for (int i = 0; i < t; i++) {
        int comp = printautosuggestion(root, suggest[i]);
       bool flag=false;
       if (comp == 0) {
            cout << "No suggestions" << endl;
            flag = true;
       }
       if(flag==true){
           insert(root,suggest[i]);
       }
    }
   
    return 0;
}
