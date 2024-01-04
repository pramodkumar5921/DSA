#include<bits/stdc++.h>
using namespace std;
class trieNode{
    public:
    int left_count,right_count;
    trieNode*left;
    trieNode*right;
    trieNode(){
        left_count=0;
        right_count=0;
        left=NULL;
        right=NULL;
    }
};
void insert(trieNode*root,int element){
    for(int i=31;i>=0;i--){
        int x=(element>>i)&1;
        if(x==1){
            root->right_count++;
            if(root->right==NULL){
                root->right=new trieNode();
            }
            root=root->right;
        }
        else{
            root->left_count++;
            if(root->left==NULL){
                root->left=new trieNode();
            }
            root=root->left;
        }
    }
}
int query(trieNode*root,int element,int k){
    if(root==nullptr){
        return 0;
    }
    int res=0;
    for(int i=31;i>=0;i--){
        int current_bit_k=((k>>i)&1);
        int current_bit_element=((element>>i)&1);

        if(current_bit_k==1){
            if(current_bit_element==1){
                res+=root->right_count;
                if(root->left==nullptr){
                    return res;
                }
                root=root->left;
            }
            else{
                    res+=root->left_count;
                    if(root->right==nullptr){
                        return res;
                    }
                    root=root->right;
            }
        }
        else{
            if(current_bit_element==1){
                if(root->right==nullptr){
                    return res;
                }
                root=root->right;
            }
            else{
                if(root->left==nullptr){
                    return res;
                }
                root=root->left;
            }
        }
    }
    return res;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long ans=0;
    trieNode* root = new trieNode(); 
    insert(root, 0);
    int temp, temp1, temp2 = 0; 
   for (int i = 0; i < n; i++) { 
        temp = arr[i]; 
        temp1 = temp2 ^ temp; 
        ans+= query(root, temp1, k); 
        insert(root, temp1); 
        temp2 = temp1; 
    } 

    cout << ans << endl; 
  
    return 0;
}
