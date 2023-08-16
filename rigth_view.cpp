/*************************************************************
 
    Following is the Binary Tree node structure:

    template <typename T>

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
#include<bits/stdc++.h>
using namespace std;
vector<int> printRightView(BinaryTreeNode<int>* root) {
    if(root==NULL){
        return {};
    }
    if(root->left==NULL and root->right==NULL){
        return {root->data};
    }
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    vector<int>ans;
    while(!q.empty()){
        int x=q.size();
        vector<int>v1;
        while(x--){
        BinaryTreeNode<int>* temp=q.front();
         q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        v1.push_back(temp->data);
        }
        ans.push_back(v1[v1.size()-1]);
    }
    return  ans;
}
