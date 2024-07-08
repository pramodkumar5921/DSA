#include<bits/stdc++.h>
using namespace std;
struct trieNode{
    trieNode*left;
    trieNode*right;
};
void insert(trieNode*root,int num){
    trieNode*node=root;
    for(int i=31;i>=0;i--){
        int i_bit = (num>>i)&1;
        if(i_bit == 1){
            if(node->right == NULL){
                node->right = new trieNode();
            }
            node = node->right;
        }
        else{
            if(node->left == NULL){
                node->left = new trieNode();
            }
            node = node->left;
        }
    }
}
int FindMaxXor(trieNode*root , int num){
    trieNode*node = root;
    int ans=0;
    for(int i=31;i>=0;i--){
        int i_bit = (num>>i)&1;
        if(i_bit == 1){
            if(node->left != NULL){
                ans  += pow(2,i);
                node = node->left;
            }
            else{
                node =  node->right;
            }
        }
        else{
            if(node->right !=NULL){
                ans += pow(2,i);
                node = node->right;
            }
            else{
                node = node->left;
            }
        }
    }
    return ans;
}
int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2) {
   trieNode*root = new trieNode();
   for(int i=0;i<arr1.size();i++){
       insert(root,arr1[i]);
   }
   int ans=0;
   for(int i=0;i<arr2.size();i++){
       int temp=FindMaxXor(root,arr2[i]);
       ans=max(ans,temp);
   }
   return ans;
}
