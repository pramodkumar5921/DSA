#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool CheckForBST(Node* root, int min, int max) {
   
    if( root == NULL ) {
        return true;
    }

    if( root->data < min or root->data > max ) {
        return false;
    }

    bool leftValid = CheckForBST(root->left, min, root->data);

    bool rightValid = CheckForBST(root->right, root->data, max);

    return leftValid and rightValid;
    
}
int main(){
    Node*root1=new Node(1);
    root1->left=new Node(0);
    root1->right=new Node(3);
    if(CheckForBST(root1,INT_MIN,INT_MAX)){
        cout<<"valid bst"<<endl;
    }
    else{
        cout<<"invalid bst"<<endl;
    }
    return 0;
}
